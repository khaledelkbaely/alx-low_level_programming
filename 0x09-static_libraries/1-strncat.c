#include "main.h"

/**
 * _strncat - entry point
 *
 * @dest: string to catenate to
 * @src: string to catenate to dest
 * @n: bytes to take from string src
 *
 * Return: return the catenate string
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len;
	int j;

	dest_len = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[dest_len + j] = src[j];
	dest[dest_len + j] = '\0';
	return (dest);
}
