#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - add node to the begining of the list
 *
 * @head: head of the list
 * @str: string to copy in the node
 *
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len;
	list_t *temp;

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

	temp = *head;
	*head = new;
	new->next = temp;

	return (*head);
}
