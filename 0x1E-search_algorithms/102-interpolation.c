#include "search_algos.h"
#include <stdio.h>

/**
* interpolation_search - searches for a value in a sorted array of integers
*                        using interpolation search algorithm
*
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
*
* Return: index of value otherwise -1
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos;
	int low = 0;
	int high = size - 1;

	if (!array || !size)
		return (-1);

	while (low <= high)
	{
		if (low == high)
		{
			if (array[low] == value)
				return (low);
			return (-1);
		}
		pos = low +
			(((double)(high - low) /
			(array[high] - array[low])) * (value - array[low]));
		if ((int)pos <= high && (int)pos >= low)
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;

	}
	return (-1);
}
