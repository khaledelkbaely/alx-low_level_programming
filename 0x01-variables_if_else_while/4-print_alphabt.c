#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char first_letter = 'a';

	while (first_letter <= 'z')
	{
		if (first_letter != 101 && first_letter != 113)
			putchar(first_letter);
		first_letter++;
	}
	putchar('\n');
	return (0);
}

