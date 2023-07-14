#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int before_ten = 48;
	int after_ten = 97;

	while (before_ten < 58)
		putchar(before_ten++);

	while (after_ten < 103)
		putchar(after_ten++);
	putchar('\n');
	return (0);
}

