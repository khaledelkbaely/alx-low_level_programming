#include "main.h"

/**
 * more_numbers - entry point
 *
 * Return: this function print and doesnt return any value
 */

void more_numbers(void)
{
	int i = 0;
	int first, second;

	while (i < 11)
	{
		int j;

		while (j < 15)
		{
			first = j;

			if (j > 9)
				first = j / 10;

			second = j % 10;
			_putchar(first + '0');

			if (j > 9)
				_putchar(second + '0');

			j++;

		}
		_putchar('\n');
		i++;
	}
}
