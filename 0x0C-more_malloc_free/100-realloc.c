#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the previously allocated memory
 * @old_size: size of the old allocated memory
 * @new_size: size of the new memory block
 *
 * Return: if fails NULL
 * on success ptr to the new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned char *byte_ptr;
	unsigned char *new_byte_ptr;
	unsigned int i;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		free(ptr);
		return (new_ptr);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	byte_ptr = ptr;
	new_byte_ptr = new_ptr;
	for (i = 0; i < new_size && i < old_size; i++)
	{
		new_byte_ptr[i] = byte_ptr[i];
	}
	free(ptr);
	return (new_ptr);
}
