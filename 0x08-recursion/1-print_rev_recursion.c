#include "main.h"

/**
 * _print_rev_recursion - entry point
 *
 * @s: string to pirnt in reverse
 *
 * Return: does not return
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
