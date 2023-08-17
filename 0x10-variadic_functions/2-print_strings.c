#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - ...
 *
 * @separator: string to be printed between strings
 * @n: number of strings passed
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string_list;
	unsigned int i;
	char *str;

	va_start(string_list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(string_list, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(string_list);
}
