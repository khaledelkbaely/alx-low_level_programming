#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, tens_i, ones_i, tens_j, ones_j;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			tens_i = i / 10;
			ones_i = i % 10;
			tens_j = j / 10;
			ones_j = j % 10;

			putchar(tens_i + '0');
			putchar(ones_i + '0');
			putchar(' ');
			putchar(tens_j + '0');
			putchar(ones_j + '0');

			if (i != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}

