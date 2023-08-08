#include "main.h"
#include <stdlib.h>
#include <string.h>

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
	int i, arg, len, length;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;
	i = 0;
	while (i < ac)
	{
		len += strlen(av[i]) + 1;
	}
	new_string = malloc((len + 1) * sizeof(char));
	if (new_string == NULL)
		return (NULL);

	arg = 0;
	for (i = 0; i < ac; i++)
	{
		length = strlen(av[i]);
		strncpy(new_string + arg, av[i], length);
		arg += length;
		new_string[arg++] = '\n';
	}
	new_string[len] = '\0';
	return (new_string);
}
