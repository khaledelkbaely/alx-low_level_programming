#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - entry point
 *
 * @a: array to find its diagonal sum
 * @size: number of items in the array
 *
 * Return: does not return
 */

void print_diagsums(int *a, int size)
{
	int sum1 = sum2 = 0;
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 += *(a + ((i * size) + j));
			if (i + j == size - 1)
				sum2 += *(a + ((i * size) + j));
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
