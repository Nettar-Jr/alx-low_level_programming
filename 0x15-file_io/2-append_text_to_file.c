#include "main.h"

/**
 * append_text_to_file - a function that append text to file
 *
 * @filename: name of file.
 * @text_content: content to add.
 *
 * Return: 1 on success, -1 on fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int numlet;
	int wr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (numlet = 0; text_content[numlet]; numlet++)
		{
		}

		wr = write(fd, text_content, numlet);

		if (wr == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
