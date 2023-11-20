#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add node to the end of the list
 *
 * @head: head of the list
 * @n: integer to add to the list
 *
 * Return: address of the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!(*head))
		*head = new;
	else
	{
		temp = *head;
		while (temp)
		{
			if (temp->next == NULL)
			{
				temp->next = new;
				break;
			}
			temp = temp->next;
		}
	}
	return (new);
}
