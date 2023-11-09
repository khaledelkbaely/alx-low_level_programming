#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - ...
 *
 * @separator:  string to be printed between numbers
 * @n: number of int passed
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num_list;
	unsigned int i;

	va_start(num_list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num_list, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(num_list);
}
