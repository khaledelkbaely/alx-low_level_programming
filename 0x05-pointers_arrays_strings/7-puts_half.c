#include  "main.h"

/**
 * puts_half - entry point
 *
 * @str: string to print
 *
 * Return: does not return
 */

void puts_half(char *str)
{
	int len, j;	

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (j = len / 2; j < len; j++)
		{
			_putchar(str[j]);
		}
	}
	else
	{
		for (j = (len - 1) / 2; j < len; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
