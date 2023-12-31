#include "main.h"

/**
 * _strlen_recursion - entry point
 *
 * @s: string to find its length
 *
 * Return: the length of the s
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
