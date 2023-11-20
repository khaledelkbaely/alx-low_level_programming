#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - delete the head node of the listint_t list
 *               and return the data in the node deleted
 *
 * @head: address of the pointer to head node of the list
 *
 * Return: the data (n) of the deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	if (*head == NULL)
		return (0);

	ptr = *head;
	*head = ptr->next;
	n = ptr->n;
	free(ptr);

	return (n);
}
