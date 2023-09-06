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
	char buf[1024];
	int fdf, fdt;
	ssize_t rd;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fdf = open(argv[1], O_RDONLY);
	if (fdf == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[1]), exit(98);

	fdt = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fdt == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]), exit(99);

	while ((rd = read(fdf, buf, 1024)) > 0)
		if ((write(fdt, buf, rd)) != rd)
			dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]), exit(99);

	if (close(fdf) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fdf), exit(100);
	if (close(fdt) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fdt), exit(100);
	return (0);
}
