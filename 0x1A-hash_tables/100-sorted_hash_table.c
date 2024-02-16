#include "hash_tables.h"

/**
 * shash_table_create - create php like hash table
 *
 * @size: size of the hash table
 *
 * Return: pointer to allocated memory
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	new_table = malloc(sizeof(hash_table_t));
	if (!new_table)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!new_table->array)
	{
		free(new_table);
		return (NULL);
	}
	new_table->shead = NULL;
	new_table->stail = NULL;
	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}

/**
 * shash_table_set - adds an element to the hash table
 *
 * @ht: hash table type
 * @key: is to index
 * @value: value of the key
 *
 * Return: 1 on success else 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *ptr, *new;
	char *nvalue;

	if (!ht || !ht->array || !ht->size || !key ||
			!(*key) || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	ptr = ht->array[index];

	while (ptr)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			nvalue = strdup(value);
			if (!nvalue)
				return (0);
			free(ptr->value);
			ptr->value = nvalue;
			return (1);
		}
		ptr = ptr->next;
	}
	new = make_shash_node(key, value);
	if (!new)
		return (0);
	new->next = ht->array[index];
	ht->array[index] = new;
	add_to_sorted_list(ht, new);

	return (1);
}

/**
 * make_shash_node - make new hash node
 *
 * @key: is to index
 * @value: value of the key
 *
 * Return: new node or NULL
 */
shash_node_t *make_shash_node(const char *key, const char *value)
{
	shash_node_t *new;

	new = malloc(sizeof(shash_node_t));
	if (!new)
		return (NULL);
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (NULL);
	}
	new->value = strdup(value);
	if (!new->value)
	{
		free(new->key);
		free(new);
		return (NULL);
	}
	new->next = new->snext = new->sprev = NULL;

	return (new);
}

/**
 * add_to_sorted_list - add a node to the sorted linked list
 * @table: the sorted hash table
 * @node: the node to add
 *
 * Return: void
 */
void add_to_sorted_list(shash_table_t *table, shash_node_t *node)
{
	shash_node_t *ptr;

	if (table->shead == NULL && table->stail == NULL)
	{
		table->shead = table->stail = node;
		return;
	}
	ptr = table->shead;
	while (ptr)
	{
		if (strcmp(node->key, ptr->key) < 0)
		{
			node->snext = ptr;
			node->sprev = ptr->sprev;
			ptr->sprev = node;
			if (node->sprev)
				node->sprev->snext = node;
			else
				table->shead = node;
			return;
		}
		ptr = ptr->snext;
	}
	node->sprev = table->stail;
	table->stail->snext = node;
	table->stail = node;
}

/**
 * shash_table_get - retrieves a value associated with akey
 *
 * @ht: hash table
 * @key: key to get the value of
 *
 * Return: value of the key else NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	int index;
	shash_node_t *ptr;

	if (!ht || !ht->array || !ht->size || !key || !(*key))
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	ptr = ht->array[index];
	while (ptr)
	{
		if (strcmp(ptr->key, key) == 0)
			return (ptr->value);
		ptr = ptr->next;
	}
	return (NULL);
}

/**
 * shash_table_print - print hash table
 *
 * @ht: hash table type
 *
 * Return: Nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *ptr;
	char notfirst = 0;

	if (!ht || !ht->array)
		return;

	printf("{");
	ptr = ht->shead;
	while (ptr)
	{
		if (notfirst)
			printf(", ");
		else
			notfirst = 1;
		printf("'%s': '%s'", ptr->key, ptr->value);
		ptr = ptr->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - print hash table
 *
 * @ht: hash table type
 *
 * Return: Nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *ptr;
	char notfirst = 0;

	if (!ht || !ht->array)
		return;

	printf("{");
	ptr = ht->stail;
	while (ptr)
	{
		if (notfirst)
			printf(", ");
		else
			notfirst = 1;
		printf("'%s': '%s'", ptr->key, ptr->value);
		ptr = ptr->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - free memory allocated for hash table
 *
 * @ht: hash table type
 *
 * Return: Nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *ptr, *tmp;
	unsigned long int i;

	if (!ht || !ht->array || !ht->size)
		return;


	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		while (ptr)
		{
			free(ptr->value);
			free(ptr->key);
			tmp = ptr;
			ptr = ptr->next;
			free(tmp);
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->shead = ht->stail = NULL;
	ht->size = 0;
	free(ht);
}
