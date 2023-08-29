#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete node at index index of a list
 *
 * @head: address of the pointer to the first node
 * @index: index of the node to delete
 *
 * Return: 1 if succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *temp;
	unsigned int i = 0;

	ptr = *head;
	if (ptr == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	while (ptr)
	{
		if (ptr->next == NULL)
			return (-1);
		if (i == index - 1)
			break;
		ptr = ptr->next;
		i++;
	}

	temp = ptr->next;
	ptr->next = temp->next;
	free(temp);

	return (1);
}
