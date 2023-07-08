#include "main.h"
/**
 * get_endianness - check for endianness
 *
 * Return: 1 if small endianness and 0 if big
 */

int get_endianness(void)
{
	unsigned int k;
	char *c;

	c = (char *)&k;
	return ((int)*c);
}
