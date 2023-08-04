#include "main.h"

/**
 * _strcmp - entry point
 *
 * @s1: string to compared to
 * @s2: string to compare to
 *
 * Return: Difference
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}
