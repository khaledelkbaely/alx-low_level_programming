#include "main.h"

/**
 * reverse_array - rev a given array
 *
 * @a: pointer to array
 * @n: number of items in the array
 *
 * Return: does not return
 */

void reverse_array(int *a, int n)
{
	int tmp, begin, end;

	begin = 0;
	end = n - 1;

	while (begin < end)
	{
		tmp = *(a + begin);
		*(a + begin) = *(a + end);
		*(a + end) = tmp;
		begin++;
		end--;
	}
}
