#include "main.h"

/**
 * print_triangle - entry point
 *
 * @size: height of triangle
 *
 * Return: does not return
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		j = 0;

		for (; j < (size - i - 1); j++)
		{
			_putchar(' ');
		}

		k = 0;

		for (; k < i + 1; k++)
		{
			_putchar('#');
		}
	}
}
