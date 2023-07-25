#include "main.h"

/**
 * _strlen - entry point
 *
 * @s: string to measure
 *
 * Return: return the length of the string s
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
