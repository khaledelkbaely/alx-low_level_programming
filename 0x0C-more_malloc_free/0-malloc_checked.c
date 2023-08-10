#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memeory using malloc
 *
 * @b: size of the allocated memory in byte
 *
 * Return: pointer to the allocted memory
 * but if it fails it exit with code 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
