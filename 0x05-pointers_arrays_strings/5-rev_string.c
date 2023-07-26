#include "main.h"

/**
 * rev_string - entry point
 *
 * @s: string to reverese
 *
 * Return: does not return
 */

void rev_string(char *s)
{
	char rev;
	int i, j, len;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	len = i - 1;

	for (j = 0; j < i / 2; j++)
	{
		rev = s[j];
		s[j] = s[len];
		s[len--] = rev;
	}

}
