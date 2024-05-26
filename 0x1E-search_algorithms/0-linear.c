#include "search_algos.h"

/**
* linear_search - seraches for a value in an array of integers using the linear search
*
* @array: pointer to the first element of the array to search in
* @size: number of elements in the array
* @value: value to search for for
*
* Return: the index of value in the array otherwise -1
*/
int linear_search(int *array, size_t size, int value)
{
	int i;
	if (!array || !size)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
