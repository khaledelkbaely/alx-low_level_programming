#include "main.h"
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - read a text file and print to stdout
 *
 * @filename: ...
 * @letters: number of bytes to print
 *
 * Return: number of bytes printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf = malloc(letters * sizeof(char));
	ssize_t count;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	count = read(fd, buf, letters);
	if (count < 0)
		return (0);
	if ((write(STDOUT_FILENO, buf, count)) != count)
		return (0);
	close(fd);
	free(buf);
	return (count);
}
