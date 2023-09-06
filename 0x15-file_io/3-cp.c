#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * main - entry point
 *
 * @argc: arguments count
 * @argv: array of args
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	char *fileFrom, *fileTo, buf[1024];
	int fdf, fdt, rd;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fileFrom = argv[1];
	fileTo = argv[2];
	fdf = open(fileFrom, O_RDONLY);
	if (fdf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", fileFrom);
		exit(98);
	}
	fdt = open(fileTo, O_CREAT | O_WRONLY | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	rd = read(fdf, buf, 1024);
	while (rd > 0)
	{
		if ((write(fdt, buf, rd)) < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s", fileTo);
			exit(99);
		}
		rd = read(fdf, buf, 1024);
	}
	if (close(fdf) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fdf);
		exit(100);
	}
	if (close(fdt) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fdt);
		exit(100);
	}
	return (0);
}
