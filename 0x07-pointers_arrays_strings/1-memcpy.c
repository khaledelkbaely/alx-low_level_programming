#include "main.h"

/**
 * _memcpy - entry point
 *
 * @dest: string to edit
 * @src: string to replce by it the n byte form dest
 * @n: number of bytes to replce from dest
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		src[i] = dest[i];
		i++;
	}
	return (dest);
}
