#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a action of array elements
 *
 * @array: array of integers
 * @size: size of the array
 * @action: function to execute
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (size == 0 || action == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
