#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of chars and
 * intialize it with a specific char
 *
 * @size: size of the array
 * @c: char to fill the array with
 *
 * Return: array of char
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	int i;

	if (size == 0)
	{
		return (NULL);
	}

	str = malloc(size * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	str[i] = '\0';
	return (str);
}
