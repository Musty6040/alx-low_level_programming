#include "main.h"

/**
* append_text_to_file - appends text to a file
* @filename: pointer to name of file
* @text_content: text to be appended
* Return: 1 on success, -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, f_write, len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";
	while (text_content[len])
		len++;
	f_write = write(fd, text_content, len);
	if (f_write == -1)
		return (-1);
	close(fd);
	return (1);
}
