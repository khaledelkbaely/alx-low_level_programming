#include "main.h"
#include <stdbool.h>

/**
 * _puts - entry point
 *
 * @str: str to print
 *
 * Return: void does not return
 */

void _puts(char *str)
{
	bool end = false;
	int i = 0;
	char ch = str[0];

	while (!end)
	{
		if (str[i] == '\0')
		{
			end = true;
			_putchar('\n');
		}
		else
		{
			_putchar(ch);
			i++;
			ch = str[i];
		}
	}
}
