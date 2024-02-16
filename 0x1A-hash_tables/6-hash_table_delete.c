#include "hash_tables.h"

/**
* hash_table_delete - free memory allocated for hash table
*
* @ht: hash table type
*
* Return: Nothing
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr, *tmp;
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
  ht->size = 0;
  free(ht);
}
