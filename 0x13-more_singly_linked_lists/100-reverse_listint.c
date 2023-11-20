#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverse listint_t linked list
 *
 * @head: address of the pointer of the first node
 *
 * Return: the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev;

	next = NULL;
	prev = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;

	return (*head);
}
