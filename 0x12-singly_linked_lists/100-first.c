#include <stdio.h>

void before_main(void) __attribute__((constructor));

/**
 * before_main - function print before main
 *
 * Return: nothing
 */

void before_main(void)
{
	char *s = "I bore my house upon my back!\n";

	printf("You're beat! and yet, you must allow,\n%s", s);
}
