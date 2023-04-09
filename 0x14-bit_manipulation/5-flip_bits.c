#include "main.h"

/**
* flip_bits - counts number of bits to flip from one another
* @n: first integer to flip
* @m: second integer to flip
* Return: number of bits to change
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int  num;
	int ctrl = 0;

	num = n ^ m;

	while (num)
	{
		if (num & 1)
			ctrl++;
		num >>= 1;
	}
	return (ctrl);
}
