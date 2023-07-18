include "main.h"

/**
 * _abs - entry point
 *
 * @n: number entring
 *
 * Return: return the absolute value of an int
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-1 * n);
	}
	else
	{
		return (n);
	}
}

