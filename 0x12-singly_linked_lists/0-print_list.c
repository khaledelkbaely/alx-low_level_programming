#include "lists.h"
#include <stdio.h>

/**
 * print_list - print list
 *
 * @h: first node in the list
 *
 * Return: node count
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("[%d] %s\n", h->str ? h->len : 0,
				h->str ? h->str : "(nil)");
		h = h->next;
		count++;
	}
	return (count);
}
