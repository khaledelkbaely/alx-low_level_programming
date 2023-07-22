#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	unsigned long int first_term = 1;
	unsigned long int second_term = 2;
	unsigned long int next;
	unsigned long int sum = 2;

	while (1)
	{
		next = first_term + second_term;
		first_term = second_term;
		second_term = next;

		if (next > 4000000)
			break;

		if (next % 2 == 0)
			sum += next;
	}
	printf("%lu\n", sum);
	return (0);
}
