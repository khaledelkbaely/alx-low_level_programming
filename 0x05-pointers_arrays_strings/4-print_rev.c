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
	int i;
	int n = _strlen(s);
	char  rev[n];
	bool end = false;
	int j;

	for (i = 0; i < n; i++)
	{
		rev[i] = s[n - 1 - i];
	}

	j = 0;
	while (!end)
	{
		if (rev[j] == '\0')
		{
			end = true;
			_putchar('\n');
		}
		else
		{
			_putchar(rev[j]);
			j++;
		}
	}
}
