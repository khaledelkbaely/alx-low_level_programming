#include "main.h"

/**
 * main - entry point
 *
 * @argc: number of arguments
 * @argv: array of the arguments passed
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc != 1)
		return (1);

	i = 0;

	while (*(argv[0] + i) != '\0')
	{
		_putchar(*(argv[0] + i));
		i++;
	}
	_putchar('\n');
	return (0);
}
