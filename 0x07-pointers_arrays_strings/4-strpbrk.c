#include "main.h"

/**
 * _strpbrk - entry point
 *
 * @s: string to search in
 * @accept: bytes to search for
 *
 * Return: pointer to the first occurance
 * any byte in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
