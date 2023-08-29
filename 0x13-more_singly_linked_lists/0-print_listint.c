#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

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
    
    if (h == NULL)
        return (NULL);
    
    while (h)
    {
        printf("%d\n", h->n);
        count++;
        h = h->next;
    }
    
    return (count);
}
