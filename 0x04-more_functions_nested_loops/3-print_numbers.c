#include "main.h"

/**
 * print_numbers - entry point
 *
 * Return: this functions print from 0 to 9 doesnt return anything
 */

void print_numbers(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
