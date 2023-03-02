#include "main.h"

/**
 * _strncpy - a function that copies a sting
 * @dest: copy to (file destination)
 * @src: copy from (original file)
 * @n: input number of char
 * Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0; src[k] != '\0'; k++)
	if (k < n)
	dest[k] = src[k];
	while (k < n)
	dest[k++] = '\0';

	return (dest);
}
