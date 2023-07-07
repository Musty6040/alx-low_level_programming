#include "main.h"

/**
 * get_bit - A function that return the bit
 * @n: Represent the value of the bit
 * @index: The index to get the bit from
 *
 * Return: The number of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	if ((n & (1UL << index)) == 0)
		return (0);
	return (1);
}
