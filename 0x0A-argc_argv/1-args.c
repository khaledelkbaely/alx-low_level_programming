#include "main.h"

/**
 * main - entry point
 *
 * @argc: number of arguments passed
 * @argv: array of the arguments passed
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	if (!argv[0])
		return (1);
	_putchar(argc + '0');
	_putchar('\n');
	return (0);
}
