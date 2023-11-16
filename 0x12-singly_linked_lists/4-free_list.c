#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free a list
 *
 * @head: the head of the list
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *temp = head;

	while (temp)
	{
		free(temp->str);
		temp = temp->next;
		free(head);
		head = temp;
	}
}
