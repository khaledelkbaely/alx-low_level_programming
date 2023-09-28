#include "main.h"

/**
 * clear_bit - set a value at bit to 0 at given index
 *
 * @n: address of number to change
 * @index: index fo the bit to change
 *
 * Return: 1 if it worked, -1 if it failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
