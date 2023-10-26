#include "main.h"

/**
 * check - check if prime
 *
 * @n: number to check
 * @start: start of testing
 *
 * Return: 0 if not prime and 1 if prime
 */

int check(int n, int start)
{
	if (n / 2 < start)
		return (1);
	if (n % start == 0)
		return (0);
	return (check(n, start + 1));
}

/**
 * is_prime_number - entry point
 *
 * @n: number to check
 *
 * Return: 0 if not prime and 1 if prime
 */

int is_prime_number(int n)
{
	if (n % 2 == 0 || n == 1 || n < 0)
		return (0);
	return (check(n, 3));
}
