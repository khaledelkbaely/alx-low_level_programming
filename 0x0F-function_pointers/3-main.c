#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: args count
 * @argv: array of the args
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((get_op_func(argv[2]) == op_div || get_op_func(argv[2]) == op_mod)
			&& atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	result = get_op_func(argv[2])(num1, num2);
	
	printf("%d\n", result);

	return (0);
}












