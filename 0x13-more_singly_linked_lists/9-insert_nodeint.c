#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert a node at given position
 *
 * @head: address to the pointer of the first node
 * @idx: the position to put the node in
 * @n: the data in the inserted node
 *
 * Return: the address of the new node or NULL if it failded
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	listint_t *new;
	unsigned int i = 0;

	if (idx == 0)
	{
		new = add_nodeint(head, n);
		return (new);
	}
	if (*head == NULL)
		return (*head);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (new);

	new->n = n;
	new->next = NULL;

	ptr = *head;
	while (ptr)
	{
		if (i == idx)
		{
			new->next = ptr;
			break;
		}
		ptr = ptr->next;
		i++;
	}
	ptr = *head;
	i = 0;
	while (ptr)
	{
		if (i == idx - 1)
		{
			ptr->next = new;
			break;
		}
		ptr = ptr->next;
		i++;
	}
	return (new);
}
