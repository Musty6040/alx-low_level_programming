#include "main.h"

/**
* create_file - creates a file
* @filename: pointer to name of file to be created
* @text_content: a NULL terminated string to write to the file
* Return: 1 on success or -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd, wrt, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_TRUNC | O_CREAT | O_WRONLY, 0600);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	while (text_content[len])
		len++;

	wrt = write(fd, text_content, len);
	if (wrt < 0)
		return (-1);

	return (1);
}
