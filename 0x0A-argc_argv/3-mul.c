#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: number of args passed
 * @argv: array of args passed
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	result = 1;

	while (i < argc)
	{
		result *= atoi(argv[i]);
		i++;
	}

	printf("%d\n", result);
	return (0);
}
