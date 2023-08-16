#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - ...
 *
 * @num_bytes: num of bytes to print
 *
 * Return: nothing
 */

void print_opcodes(int num_bytes)
{
	unsigned char *ptr = (unsigned char *)&print_opcodes;
	int i;

	for (i = 0; i < num_bytes; i++)
	{
		if (i != num_bytes - 1)
			printf("%02x ", ptr[i]);
		else
			printf("%02x\n", ptr[i]);
	}
}

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
	int num_bytes;
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

	print_opcodes(num_bytes);

	return (0);
}
