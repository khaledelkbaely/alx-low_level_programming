#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i = 0;

	for (; i < 26; i++)
	{
		_putchar('a' + i);
	}
	_putchar('\n');
}


