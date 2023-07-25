#include "main.h"

/**
 * swap_int - entry point
 *
 * @a: first int
 * @b: second int
 *
 * Return: does not return
 */

void swap_int(int *a, int *b)
{
	int buffer;

	buffer = *a;
	*a = *b;
	*b = buffer;
}
