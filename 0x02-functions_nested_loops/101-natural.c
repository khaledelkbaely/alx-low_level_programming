#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	unsigned int num = 1024;
	unsigned int sum;

	sum = 0;
	num -= 1;
	while (num > 1)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			sum += num;
		}
		num -= 2;
	}
	printf("%d\n", sum);
	return (0);
}
