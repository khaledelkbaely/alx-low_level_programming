#include <math.h>
#include <stdio.h>
#include "search_algos.h"

/**
* jump_search - searches for a value in a sorted array of integers
*
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
*
* Return: index of value in the array otherwise -1
*/
int jump_search(int *array, size_t size, int value)
{
	int step = sqrt(size);
	int low = 0, i;
	int high = 0;

	if (!array || !size)
		return (-1);

	while (array[high < (int)size - 1 ? high : (int)size - 1] < value)
	{
		if (high >= (int)size)
			break;
		printf("Value checked array[%d] = [%d]\n", high, array[high]);
		low = high;
		high += step;
		if (low > (int)size - 1)
			return (-1);
	}

	printf("Value found between indexes [%d] and [%d]\n", low, high);

	for (i = low; i <= high && i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
