#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: new string
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0;
	char *catedstring;
	int i, j;

	if (s1 == NULL && s2)
		return (s2);
	if (s2 == NULL && s1)
		return (s1);
	if (s2 == NULL && s2 == NULL)
		return ("");

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	catedstring = malloc((len1 + len2 + 1) * sizeof(char));
	if (catedstring == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		catedstring[i] = s1[i];
	for (j = 0; j < len2; j++)
		catedstring[i + j] = s2[j];
	catedstring[i + j] = '\0';

	return (catedstring);
}
