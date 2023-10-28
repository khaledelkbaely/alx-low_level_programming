#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: number of args passed
 * @argv: array of args passed
 *
 * Return: 0 if success else 1
 */

int main(int argc, char *argv[])
{
	int i, result;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	result = 0;
	for (i = 1; i < argc; i++)
	{
		int j;

		for (j = 0; *(argv[i] + j); j++)
		{
			if (*(argv[i] + j) > '9' || *(argv[i] + j) < '0')
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
