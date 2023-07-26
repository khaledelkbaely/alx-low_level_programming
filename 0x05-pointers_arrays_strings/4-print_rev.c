#include "main.h"
#include <stdbool.h>

/**
 * print_rev - entry point
 *
 * @s: string to reverse
 *
 * Return: void func does not  return
 */

void print_rev(char *s)
{
	int i, j, len;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	len = i;

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
