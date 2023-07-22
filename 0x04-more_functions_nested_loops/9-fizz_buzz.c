#include "main.h"

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i, first, second;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
			_putchar(' ');
		}
		else if (i % 3 == 0 && i % 5 != 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar(' ');
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
			_putchar(' ');
		}
		else
		{
			if (i <= 9)
			{
				_putchar(i + '0');
				_putchar(' ');
			}
			else
			{
				first = i / 10;
				second = i % 10;

				_putchar(first + '0');
				_putchar(second + '0');
				_putchar(' ');
			}

		}
	}
	return (0);
}
