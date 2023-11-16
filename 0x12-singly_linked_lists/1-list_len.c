#include "lists.h"

/**
 * list_len - check the num of nodes in the list
 *
 * @h: list to check
 *
 * Return: num of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
