#include "main.h"

/**
 * create_file - a function that creates a file
 *
 * @filename: name of the file.
 * @text_content: content of the file.
 *
 * Return: On success  1, On fails -1.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int numlet;
	int wr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (numlet = 0; text_content[numlet]; numlet++)
	{
	}

	wr = write(fd, text_content, numlet);

	if (wr == -1)
		return (-1);

	close(fd);

	return (1);
}
