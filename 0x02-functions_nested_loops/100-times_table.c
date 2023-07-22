#include "main.h"

/**
 * print_times_table - entry point
 *
 * @n: the number you want to reach
 *
 * Return: does not return
 */

void print_times_table(int n)
{
	int i;

	if (n > 15 || n < 0)
	{
		return;
	}
	else
	{
		i = 0;
		while (i <= n)
		{
			int first, second, third;
			int j = 0;

			for (; j < n + 1; j++)
			{
				int num = i * j;

				if (num > 99)
				{
					first = num / 100;
					second = (num / 10) % 10;
					third = num % 10;

					_putchar(first + '0');
					_putchar(second + '0');
					_putchar(third + '0');
					if (j != n)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
				else if (num > 9)
				{
					first = num / 10;
					second = num % 10;


					_putchar(first + '0');
					_putchar(second + '0');
					if (j != n)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
				}
				else
				{
					_putchar(num + '0');
					if (j != n)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
				}
			}
			_putchar('\n');
			i++;
		}
	}
}
