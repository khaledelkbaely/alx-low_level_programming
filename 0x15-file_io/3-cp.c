#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * handleError - ...
 *
 * @error_message: ...
 * @exit_code: ...
 *
 * Return: Nothing
 */
void handleError(const char *error_message, int exit_code)
{
	dprintf(STDERR_FILENO, "%s\n", error_message);
	exit(exit_code);
}

/**
 * main - entry point
 *
 * @argc: arguments count
 * @argv: arguments array
 *
 * Return: 1 on success
 */

int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;
	int fd_from, fd_to;

	if (argc != 3)
		handleError("Usage: cp file_from file_to", 97);

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		handleError("Error: Can't read from file", 98);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_to == -1)
		handleError("Error: Can't write to file", 99);


	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
			handleError("Error: Can't write to file", 99);
	}

	if (bytes_read == -1)
		handleError("Error: Can't read from file", 98);

	if (close(fd_from) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_from), exit(100);
	if (close(fd_to) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_to), exit(100);
	return (EXIT_SUCCESS);
}
