#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free listint_t list then set its head to NULL
 *
 * @head: pointer to the head of the list
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	ptr = *head;
	while (ptr)
	{
		ptr = ptr->next;
		free(*head);
		*head = ptr;
	}
	head = NULL;
}
