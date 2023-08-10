#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates meomory for an array
 * of nmemb elements of size bytes each
 * 
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: if it fails NULL
 * on succes return void pointer to the memory allocated
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	unsigned char *byte_ptr = (unsigned char *)ptr;
	for (i = 0; i < nmemb * size; i++)
		byte_ptr[i] = 0;

	return (ptr);
}
