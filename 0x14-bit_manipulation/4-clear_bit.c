#include "main.h"

/**
 * clear_bit - Sets the value of a bit at a particular index to 0.
 * @n: A pointer to the number to change
 * @index: The index of the bit to clear
 *
 * Return: If an error occurs - -1.
 *         Otherwise - 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = (~(1UL << index) & *n);

	return (1);
}

