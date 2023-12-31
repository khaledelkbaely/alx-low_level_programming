#include "lists.h"

/**
 * sum_listint - sum all of the data (n) in the list
 *
 * @head: pointer to the first node
 *
 * Return: sum else if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
