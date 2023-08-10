#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of integers
 *
 * @min: first value of the array
 * @max: last value in the array
 *
 * Return: if fails NULL
 * on success return pointer to array first element
 */

int *array_range(int min, int max)
{
	int *arr;
	int num_of_elements = 0;
	int i;

	if (min > max)
		return (NULL);

	i = 0;
	while (max - i >= min)
		num_of_elements++;

	arr = malloc(num_of_elements * sizeof(int));
	if (arr == NULL)
		return (NULL);

	i = 0;
	while (min + i <= max)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
