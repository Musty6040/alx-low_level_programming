#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
int fd;
int nfig = 0;
int rw;
if (filename == NULL) 
return (-1);
if (text_content != NULL) 
while (text_content[nfig])
nfig++;
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
rw = write(fd, text_content, nfig);
if (fd == -1 || rw == -1) 
return (-1);
close(fd);
return(1);
}
