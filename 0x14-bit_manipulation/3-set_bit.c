#include "main.h"

/**
 * set_bit - Sets the value of a bit at a defined index to 1.
 * @n: A pointer to the bit to change.
 * @index: The index of a bit to  set to 1.
 *
 * Return: return exactly one on success &  -1 if fail.
 *         Otherwise - 1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = ((1UL << index) | *n);

	return (1);
}
