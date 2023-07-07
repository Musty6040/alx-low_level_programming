#include "main.h"
/**
 * flip_bits - A function that return number of flip bits
 * @n: The number
 * @m: The flip number
 *
 * Return: The number of bit changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int item;
	int counter;

	item = n ^ m;

	counter = 0;

	while (item)
	{
		if (item & 1)
			counter++;
		item >>= 1;
	}
	return (counter);
}
