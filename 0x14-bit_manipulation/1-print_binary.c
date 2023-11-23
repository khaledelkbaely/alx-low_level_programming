#include "main.h"

/**
 * print_binary2 - print binary represination of a number
 *
 * @n: number to print in binary
 *
 * Return: Nothing
 */

void print_binary2(unsigned long int n)
{
	if (n == 0)
		return;
	print_binary2(n >> 1);
	_putchar(n & 1 ? '1' : '0');
}

/**
 * print_binary - print binary represination of a number
 *
 * @n: number to print in binary
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else
		print_binary2(n);
}
