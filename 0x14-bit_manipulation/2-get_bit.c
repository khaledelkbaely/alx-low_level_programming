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
	n = n >> index;
	return (n & 1);
}
