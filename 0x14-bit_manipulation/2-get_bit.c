#include "main.h"

/**
 * get_bit - ...
 *
 * @n: ...
 * @index: ...
 *
 * Return: bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
				return (-1);

	n = n >> index;
	return (n & 1);
}
