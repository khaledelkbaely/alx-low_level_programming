#include "main.h"

/**
 * print_to_98 - entry point
 *
 * &n: number entering
 *
 * Return: this does not return
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i <= 98; i--)
		{
			_putchar(i + '0');
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		_putchar('\n');
		}
	}
	else if (n < 98)
	{
		for (i = n; i >= 98; i++)
		{
			_putchar(i + '0');
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	else
	{
		_putchar(n + '0');
		_putchar('\n');
	}
}
