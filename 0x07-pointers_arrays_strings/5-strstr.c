#include "main.h"

/**
 * _strstr - entry point
 *
 * @haystack: string to look in
 * @needle: substring looking for
 *
 * Return: pointer to the begging of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack; haystack++)
	{
		char *s = haystack;
		char *sub = needle;

		while (*s == *sub && *sub != '\0')
		{
			s++;
			sub++;
		}

		if (*sub == '\0')
			return (haystack);
	}
	return (0);
}
