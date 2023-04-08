#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * error_file - checks if files can be opened.
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_file(int file_from, int file_to, char *argv[])
{
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}

/**
* main - copy the content of a file to another file
* @argc: count the number of arguments.
* @argv: count the number of  arguments vector.
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
int file_from, file_to, error_close;
ssize_t len, y;
char buff[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
exit(97);
}

file_from = open(argv[1], O_RDONLY);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
error_file(file_from, file_to, argv);

len = 1024;
while (len == 1024)
{
len = read(file_from, buff, 1024);
if (len == -1)
error_file(-1, 0, argv);
y = write(file_to, buff, len);
if (y == -1)
error_file(0, -1, argv);
}

error_close = close(file_from);
if (error_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}

error_close = close(file_to);
if (error_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}
return (0);
}
