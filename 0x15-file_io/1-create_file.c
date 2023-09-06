#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * create_file - creates a file
 *
 * @filename: ...
 * @text_content: text to write in the file
 *
 * Return: 1 on success if it fails -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd < 0)
		return (-1);

	if (text_content == NULL)
		text_content = "";
	while (text_content[len])
		len++;

	if (write(fd, text_content, len) < 0)
		return (-1);

	return (0);
}
