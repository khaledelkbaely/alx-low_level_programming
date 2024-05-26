#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - print arra of given size
 *
 * @array: array to print
 * @start: start index to print from
 * @end: end index to print to
 *
 * Return: Nothing
 */
void print_array(int *array, int start, int end)
{
	int i;

	printf("Searching in array:");
	for (i = start; i <= end; i++)
		printf(i != end ? " %d," : " %d\n", array[i]);
}
/**
* binary_search - seraches for a value in an array of
*                 integers using the linear search
*
* @array: pointer to the first element of the array to search in
* @size: number of elements in the array
* @value: value to search for for
*
* Return: the index of value in the array otherwise -1
*/
int binary_search(int *array, size_t size, int value)
{
	int low, high, mid;

	if (!array || !size)
		return (-1);

	low = 0;
	high = size - 1;
	for (; low <= high;)
	{
		print_array(array, low, high);
		mid = (low + high) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
