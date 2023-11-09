#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - search for an integer
 *
 * @array: array to search in
 * @size: size of the array
 * @cmp: comparing func
 *
 * Return: index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
