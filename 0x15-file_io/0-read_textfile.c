#include <unistd.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

/**
 * read_textfile - reads and prints a text file
 *
 * @filename: file to read
 * @letters: letters it should read and print
 *
 * Return: n letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t lenRead, lenWrite;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
		if (buffer == NULL)
		{
			close(fd);
			return (0);
		}
	lenRead = read(fd, buffer, letters);
	close(fd);
	if (lenRead == -1)
	{
		free(buffer);
		return (0);
	}
	lenWrite = write(STDOUT_FILENO, buffer, lenRead);
	free(buffer);
	if (lenRead != lenWrite)
		return (0);
	return (lenWrite);
}
