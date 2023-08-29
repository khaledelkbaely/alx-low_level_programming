#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - ...
 *
 * @head: pointer to the first node
 * @index: index of the node to return
 *
 * Return: the node at index index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr;

	ptr = head;
	while (ptr)
	{
		if (i == index)
			return (ptr);
		ptr = ptr->next;
		i++;
	}
	return (NULL);
}
