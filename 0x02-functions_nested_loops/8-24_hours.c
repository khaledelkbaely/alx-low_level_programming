#include "main.h"

/**
 * jack_bauer - entry point
 *
 * Return: function doesnt return
 */
void jack_bauer(void)
{
	int i;
	int first;
	int second;

	for (i = 0; i < 24; i++)
	{
		int j;
		int third;
		int fourth;

		first = i / 10;
		second = i % 10;

		for (j = 0; j < 60; j++)
		{
			third = j / 10;
			fourth = j % 10;

			_putchar(first + '0');
			_putchar(second + '0');
			_putchar(':');
			_putchar(third + '0');
			_putchar(fourth + '0');
		}
	}
}

