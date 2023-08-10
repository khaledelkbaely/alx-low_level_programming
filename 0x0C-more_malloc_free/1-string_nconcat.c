#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate n bytes from s2 to s1
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concat from s2
 *
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, i, j;
	char *new_string;

	if (s1 == NULL)
		*s1 = '\0';
	if (s2 == NULL)
		*s2 = '\0';

	while (s1[len1])
		len1++;

	new_string = malloc((len1 + n + 1) * sizeof(char));
	if (new_string == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		new_string[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		new_string[i] = s2[j];
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}










