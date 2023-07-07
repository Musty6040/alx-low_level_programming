#include "main.h"

/**
 * set_bit - A function that set say from a specific one to another
 * @n: The bit to set
 * @index: The index to which the bit should start from
 *
 * Return: The bits set
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64 - 1)
		return (-1);
	*n ^= (1UL << index);
	return (1);
}

