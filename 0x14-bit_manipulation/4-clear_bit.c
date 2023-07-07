#include "main.h"

/**
 * clear_bit - A function that set the value of bits to 0
 * @n: The bit to clear off
 * @index: The position in which the bit to be clear is
 *
 * Return: The nothing
 */

int clear_bit(unsigned long int *n, unsigned int index)

{
	if (index > 65 - 2)
		return (-1);
	*n = (*n) & (~(1UL << index));
		return (1);
}
