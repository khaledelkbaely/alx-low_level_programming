#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int check_digits(char *str);
long long int _atoi(char *str);

/**
 * main - entry point
 *
 * @argc: arg count
 * @argv: array of strings
 *
 * Return: on success 0
 */

int main(int argc, char **argv)
{
	long long int num1;
	long long int num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (check_digits(argv[1]) || check_digits(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);

	printf("%lld\n", num1 * num2);
	return (0);
}

/**
 * check_digits - check if string is composed only of digits
 *
 * @str: string to check
 *
 * Return: 1 if there is non digits in the string
 * 0 if there is no non digits in the string
 */

int check_digits(char *str)
{
	while (*str)
	{
		if (*str > '9' || *str < '0')
			return (1);
		str++;
	}
	return (0);
}

/**
 * _atoi - change string to long long
 *
 * @str: string to change
 *
 * Return: long long of the string
 */

long long int _atoi(char *str)
{
	long long int num;
	int i;

	i = 0;
	while (*str)
	{
		if (i++ == 0)
			num = *str - '0';
		else
			num += *str - '0';
		if (*(str + 1))
			num *= 10;
		str++;
	}
	return (num);
}
