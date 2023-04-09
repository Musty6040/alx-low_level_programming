#include "main.h"

/**
 * set_bit - Sets the value of a bit at a specifiedindex to 1.
 * @n: A pointer to the number of bit to change.
 * @index: The index to set the value at.
 *
 * Return: On success return 1 & -1 if fails
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = (~(1UL << index) & *n);


	return (1);
}

