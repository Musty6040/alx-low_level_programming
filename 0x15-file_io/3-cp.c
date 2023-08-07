#include "main.h"

/**
* main - copies contents of one file to another.
* @ac: number of command line arguments
* @av: arguments
* Return: Always 0;
*/

int main(int ac, char **av)
{
	int fd1, fd2, f_read;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	if (fd1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd2 = open(av[2], O_CREAT | O_WRONLY |  O_TRUNC, 0664);
	while ((f_read = read(fd1, buf, 1024)) > 0)
	{
		if (write(fd2, buf, f_read) != f_read || fd2 < 0)
		{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (f_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (close(fd1) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) < 0)
	{
		dprintf(STDERR_FILENO, ": Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
