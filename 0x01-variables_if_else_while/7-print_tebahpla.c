#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char last_letter = 'z';

	while (last_letter >= 'a')
	{
		putchar(last_letter);
		last_letter--;
	}
	putchar('\n');
	return (0);
}

