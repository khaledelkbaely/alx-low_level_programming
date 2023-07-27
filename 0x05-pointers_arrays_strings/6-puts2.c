#include "main.h"

/**
 * puts2 - entry point
 *
 * @str: str to print
 *
 * Return: does not return
 */

void puts2(char *str)
{
	int i, j, len;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	len = i;

	for (j = 0; j < len; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
