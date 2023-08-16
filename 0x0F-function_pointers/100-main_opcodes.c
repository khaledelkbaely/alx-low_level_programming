#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: ...
 * @argv: ...
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	unsigned char *ptr = (unsigned char *)&main;
	int num_bytes;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < num_bytes; i++)
	{
		if (i != num_bytes - 1)
			printf("%02hhx ", ptr[i]);
		else
			printf("%02hhx\n", ptr[i]);
	}

	return (0);
}
