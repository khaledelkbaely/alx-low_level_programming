#include "main.h"

/**
 * _strcat - entry point
 *
 * @dest: string to catenate to
 * @src: string to catenate to dest
 *
 * Return: return the catenate string
 */

char *_strcat(char *dest, char *src)
{
	int src_len, dest_len;
	int j;

	src_len = 0;
	dest_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	for (j = 0; j < src_len; j++)
	{
		dest[dest_len + j] = src[j];
	}
	dest[dest_len + j] = '\0';
	return (dest);
}
