#include "main.h"

/**
 * factorial - entry point
 *
 * @n: number to be factorialed
 *
 * Return: factorail of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
