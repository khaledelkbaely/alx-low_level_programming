#include "lists.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * print_listint - print all elements of the list
 *
 * @h: list of integer
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("[%p] %d\n", (void *) h, h->n);
		count++;
		h = h->next;
	}

	return (count);
}

/**
 * print_listint_safe - print listint_t linked list with loop
 *
 * @head: pointer to the first node in the list
 *
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 1;
	const listint_t *sptr = head, *fptr = head;

	if (head == NULL)
		exit(98);
	while (fptr && fptr->next)
	{
		sptr = sptr->next;
		fptr = fptr->next->next ? fptr->next->next : fptr->next;
		if (sptr == fptr)
		{
			sptr = head;
			for (; fptr && sptr; nodes++)
			{
				if (fptr == sptr)
				{
					printf("[%p] %d\n", (void *) sptr, sptr->n);
					break;
				}
				printf("[%p] %d\n", (void *) sptr, sptr->n);
				sptr = sptr->next;
				fptr = fptr->next;
			}
			for (; sptr && fptr; nodes++)
			{
				sptr = sptr->next;
				if (sptr != fptr)
				{
					printf("[%p] %d\n", (void *) sptr, sptr->n);
				}
				else
					break;
			}
			printf("-> [%p] %d\n", (void *) sptr, sptr->n);
			return (nodes);
		}
	}
	nodes = print_listint(head);
	return (nodes);
}
