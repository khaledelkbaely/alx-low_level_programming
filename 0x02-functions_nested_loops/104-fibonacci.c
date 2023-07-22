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
	unsigned long int next;
	int i = 2;

	printf("%lu, %lu, ", first, second);
	while (i < 98)
	{
		next = first + second;
		first = second;
		second = next;

		if (i != 97)
			printf("%lu, ", next);
		else
			printf("%lu", next);
		i++;
	}
	printf("\n");
	return (0);
}
