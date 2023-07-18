#include "main.h"

/**
 * times_table - entry point
 *
 * Return: this funtion prints the times table to 9
 * does not return anything
 */
void times_table(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0; j < 10; j++)
		{
			int num = i * j;

			if (num > 9)
			{
				int first = num / 10;
				int second = num % 10;

				_putchar(first + '0');
				_putchar(second + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}

			_putchar(num + '0');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

