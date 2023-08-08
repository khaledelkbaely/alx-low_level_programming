#include "main.h"
#include <stdlib.h>

/**
 * get_total_length - get the len
 *
 * @ac: number of arguments
 * @av: array of string of the arguments
 *
 * Return: string
 */

int get_total_length(int ac, char **av)
{
	int total_length = 0;
	char *arg;
	int j;

	for (int i = 0; i < ac; i++)
	{
		arg = av[i];
		j = 0;
		while (arg[j] != '\0')
		{
			total_length++;
			j++;
		}
		total_length++;
	}
	return (total_length);
}

/**
 * argstostr - concatenates all arguments of a program
 *
 * @ac: number of arguments
 * @av: array of string of the arguments
 *
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	int total_length;
	char *result;
	int current_index;
	int i, j;

	if (ac == 0 || av == NULL)
		return (NULL);

	total_length = get_total_length(ac, av);

	result = (char *)malloc((total_length + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);

	current_index = 0;
	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		j = 0;
		while (arg[j] != '\0')
		{
			result[current_index++] = arg[j++];
		}
		result[current_index++] = '\n';
	}

	result[total_length] = '\0';

	return (result);

}
