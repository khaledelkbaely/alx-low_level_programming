#include "main.h"

/**
 * main -entry point
 *
 * @argc: number of args passed
 * @argv: array of args passed
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;

	while (argv[i])
	{
		int j;
		
		for (j = 0; *(argv[i] + j); j++)
		{
			_putchar(*(argv[i] + j));
		}
		_putchar('\n');
		i++;
	}
	return (0);
}
