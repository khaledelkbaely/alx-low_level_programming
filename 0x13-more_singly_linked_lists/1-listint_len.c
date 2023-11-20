#include "lists.h"

/**
 * listint_len - count the number of nodes of listint_t
 *
 * @h: listint_t
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
