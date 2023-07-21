#include "main.h"

/**
 * print_line - entry point
 *
 * @n: the length of the line
 *
 * Return: this func does not return any value
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
