#include "main.h"

/**
 * _memcpy - a function that prints memory area
 * @dest: enter
 * @src: enter
 * @n: enter
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
