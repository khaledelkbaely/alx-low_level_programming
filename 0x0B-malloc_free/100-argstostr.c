#include "main.h"
#include <stdlib.h>

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
	char *new_string;
	int i, arg, len, j;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;
	i = 0;
	while (i < ac)
	{
		while (av[i][len])
		{
			len++;
		}
		len++;
		i++;
	}
	new_string = malloc((len + 1) * sizeof(char));
	if (new_string == NULL)
		return (NULL);

	i = 0;
	arg = 0;
	while (i < len && arg < ac)
	{
		for (j = 0; av[i][j]; j++)
		{
			new_string[i] = av[arg][j];
			i++;
		}
		new_string[i] = '\n';
		i++;
		arg++;
	}
	new_string[i] = '\0';
	return (new_string);
}
