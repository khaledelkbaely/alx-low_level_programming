#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add a node to begining of the listint_t list
 *
 * @head: pointer to a pointer to node
 * @n: integer to add to the node
 *
 * Return: the address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	return (NULL);

	new->n = n;
	new->next = NULL;

	temp = *head;
	*head = new;
	new->next = temp;

	return (new);
}
