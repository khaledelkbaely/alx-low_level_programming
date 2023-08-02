#include "main.h"

/**
 * _sqrt - entry point
 *
 * @n: number to find it sqrt
 * @start: starting point of searching
 *
 * Return: the sqrt of n
 */

int _sqrt(int n, int start)
{
	if (start * start == n)
		return (start);
	else if (start * start > n)
		return (-1);
	return (_sqrt(n, start + 1));
}

/**
 * _sqrt_recursion - entry point
 *
 * @n: number to sqrt
 *
 * Return: the sqrt of n
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 10));
}
