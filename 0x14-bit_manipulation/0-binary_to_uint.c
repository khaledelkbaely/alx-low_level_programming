#include "main.h"
#include <stdlib.h>

/**
 * _pow - raise n to power power
 *
 * @n: uint
 * @power: uint
 *
 * Return: n to the power power
 */

unsigned int _pow(unsigned int n, unsigned int power)
{
	unsigned int ret = 1;
	unsigned int i;

	if (power == 0)
		return (ret);

	for (i = 0; i < power; i++)
	{
		ret *= n;
	}
	return (ret);
}

/**
 * binary_to_uint - converts a binary number to uint
 *
 * @b: chars array of the binary num
 *
 * Return: converted number or 0 if it fails
 */

unsigned int binary_to_uint(const char *b)
{
	int len = 0, i = 0;
	unsigned int ret = 0;

	if (b == NULL)
		return (ret);
	while (b[len])
	{
		if (b[len] != '0' && b[len] != '1')
			return (ret);
		len++;
	}

	while (i < len)
	{
		ret += (b[i] - '0') * _pow(2, len - 1 - i);
		i++;
	}
	return (ret);
}
