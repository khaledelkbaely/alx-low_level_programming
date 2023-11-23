#include "main.h"

/**
 * set_bit - set a certain bit to 1
 *
 * @n: address of a unsigned long int
 * @index: index to change its value to 1
 *
 * Return: 1 for success, -1 if it failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);
	return (1);
}
