#include "main.h"

/**
 * _strcpy - entry point
 *
 * @dest: buffer to copy to
 * @src: string to copy to buffer
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, j;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (j = 0; j < len; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}
