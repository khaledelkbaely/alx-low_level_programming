#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - add node to the begining of the list
 *
 * @head: head of the list
 * @str: string to copy in the node
 *
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;
	int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (new);
	if (str)
	{
		new->str = strdup(str);
		for (len = 0; str[len]; len++)
			;
		new->len = len;
		new->next = NULL;
	}

	if (!(*head))
		*head = new;
	else
	{
		temp = *head;
		while (temp)
		{
			if (!temp->next)
			{
				temp->next = new;
				break;
			}
			temp = temp->next;
		}
	}

	return (new);
}
