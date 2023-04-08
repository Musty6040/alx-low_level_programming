#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read a text file and print it to STDOUT.
 * @filename:the  text file to read
 * @letters: number of letters to be read from the text file
 * Return: w- the  actual number of bytes to read and print
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fd;
ssize_t x;
ssize_t y;
char *buffer;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	x = read(fd, buffer, letters);
	y = write(STDOUT_FILENO, buffer, x);

	free(buffer);
	close(fd);
	return (y);
}

