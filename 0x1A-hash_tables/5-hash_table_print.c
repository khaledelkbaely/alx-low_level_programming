#include "hash_tables.h"

/**
 * hash_table_print - print hash table
 *
 * @ht: hash table type
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr;
	int i, notfirst = 0;

	if (!ht || !ht->array)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		while (ptr)
		{
			if (notfirst)
				printf(", ");
			else
				notfirst = 1;
			printf("'%s':'%s'", ptr->key, ptr->value);
			ptr = ptr->next;
		}
	}
	printf("}\n");
}
