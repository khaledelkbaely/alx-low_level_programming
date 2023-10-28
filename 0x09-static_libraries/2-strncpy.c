#include "main.h"

/**
 * _strncpy - entry point
 *
 * @dest: string to copy to
 * @src: string to copy from
 * @n: bytes to copy form src
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
