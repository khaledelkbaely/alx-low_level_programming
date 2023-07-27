#include "main.h"
#include <stdio.h>

/**
 * print_array - entry point
 *
 * @a: array to print its items
 * @n: number of items in the array
 *
 * Return: does not return
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", *(a + i));
		else
			printf("%d\n", *(a + i));
	}
	printf("\n");
}
