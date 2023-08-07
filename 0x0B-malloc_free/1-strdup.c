#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate a give string
 *
 * @str: string to duplicate
 *
 * Return: duplicated string
 */

char *_strdup(char *str)
{
	int len;
	char *dup;
	int i;

	if (str == NULL)
		return (NULL);

	len = 0;
	while (str[len])
	{
		len++;
	}

	dup = malloc(len * sizeof(char));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = str[i];
	dup[i] = '\0';

	return (dup);
}
