#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a text file.
 * @filename: Is a  pointer to the name of the file.
 * @text_content: The strings to add to the end of the text file.
 *
 * Return: If the file name is NULL return -1
 *   If the file does not exist the user won't habe  write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd,w,xrd;
	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (xrd = 0; text_content[xrd];)
			xrd++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, xrd);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}

