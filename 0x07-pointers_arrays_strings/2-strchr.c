#include "main.h"

/**
 * _strchr - entry point
 *
 * @s: string to search in
 * @c: char to search for in s
 *
 * Return: pointer to the first occurance of c
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
