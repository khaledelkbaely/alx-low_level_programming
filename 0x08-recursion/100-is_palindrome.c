#include "main.h"

/**
 * _strlen - find the length of a string
 *
 * @s: string in concern
 *
 * Return: the len of the string
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * palin - check if string is the same as string in rev
 *
 * @s: string to check
 * @len: len of the string
 *
 * Return: 1 if palin 0 if not
 */

int palin(char *s, int len)
{
	if (*s != *(s + len - 1))
		return (0);

	else if (*s == '\0')
		return (1);

	return (palin(s + 1, len - 2));
}

/**
 * is_palindrome - check if a string is palindrome
 *
 * @s: string to check
 *
 * Return: 1 if palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen(s);

	return (palin(s, len));
}
