#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: hash table type
 * @key: is to index
 * @value: value of the key
 *
 * Return: 1 on success else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *ptr, *new;
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
	new = make_hash_node(key, value);
	if (!new)
		return (0);
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}

/**
 * make_hash_node - make new hash node
 *
 * @key: is to index
 * @value: value of the key
 *
 * Return: new node or NULL
 */
hash_node_t *make_hash_node(const char *key, const char *value)
{
	hash_node_t *new;
	char *nkey, *nvalue;

	new = malloc(sizeof(hash_node_t *));
	if (!new)
		return (NULL);
	nkey = strdup(key);
	if (!nkey)
	{
		free(new);
		return (NULL);
	}
	nvalue = strdup(value);
	if (!nvalue)
	{
		free(new);
		free(nkey);
		return (NULL);
	}

	new->key = nkey;
	new->value = nvalue;


	return (new);
}
