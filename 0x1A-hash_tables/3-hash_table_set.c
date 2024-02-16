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

	if (!ht || !key || !(*key))
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	ptr = ht->array[index];
	if (ptr)
	{
		while (ptr->next)
		{
			ptr = ptr->next;
		}
		new = malloc(sizeof(hash_node_t *));
		if (!new)
			return (0);
		new->key = strdup(key);
		new->value = strdup(value);
		new->next = NULL;
		ptr->next = new;
	}
	new = malloc(sizeof(hash_node_t *));
	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;
	ptr = new;

	return (1);
}
