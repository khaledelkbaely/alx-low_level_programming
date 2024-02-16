#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with akey
 *
 * @ht: hash table
 * @key: key to get the value of
 *
 * Return: value of the key else NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *ptr;

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
