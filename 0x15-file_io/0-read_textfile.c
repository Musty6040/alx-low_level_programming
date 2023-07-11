#include "main.h"

/**
* read_textfile - Reads a text file & print
* to the POSIX standard output.
* @filename: Pointer to file to be read.
* @letters: number of characters to be read.
* Return: number of letters printed or 0 if failed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, f_read, f_write;
	char *buf = malloc(letters * sizeof(char));

	if (!buf)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0 || filename == NULL)
		return (0);

	f_read = read(fd, buf, letters);
	if (f_read < 0)
		return (0);
	buf[f_read] = '\0';
	close(fd);

	f_write = write(STDOUT_FILENO, buf, f_read);
	if (f_write < 1)
		return (0);
	free(buf);

	return (f_write);
}
