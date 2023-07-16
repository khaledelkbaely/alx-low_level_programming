#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first, second, third, fourth;

	for (first = 0; first < 10; first++)
	{
		for (second = 0; second < 10; second++)
		{
			fourth = second + 1;
			third = first;
			for (; third < 10; third++)
			{
				for (; fourth < 10; fourth++)
				{
					putchar(first + '0');
					putchar(second + '0');
					putchar(' ');
					putchar(third + '0');
					putchar(fourth + '0');
					if (first != 9 || third != 9 || second != 8 || fourth != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	return (0);
}

