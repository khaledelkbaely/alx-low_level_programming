#include "main.h"

/**
 * print_diagonal - entry point
 *
 * @n: length of the diagonal
 *
 * Return: does not return any value
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		int j;

		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}
}
