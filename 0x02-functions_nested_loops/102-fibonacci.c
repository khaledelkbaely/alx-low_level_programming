#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	unsigned long int first = 1;
	unsigned long int second = 2;
	unsigned long int sum;
	int i = 0;

	printf("%lu, %lu, ", first, second);
	while (i < 50)
	{
		sum = first + second;
		first = second;
		second = sum;

		if (i != 50)
			printf("%lu, ", sum);
		else
			printf("%lu", sum);
		i++;
	}
	return (0);
}
