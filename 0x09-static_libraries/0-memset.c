#include "main.h"

/**
 * _memset -entry point
 *
 * @s: string to edit
 * @b: byte to replace the n byte by it
 * @n: number of bytes to replce at the start of the string
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
