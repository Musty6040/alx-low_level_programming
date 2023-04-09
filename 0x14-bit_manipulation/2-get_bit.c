#include "main.h"

/**
* get_bit - gets the value of a bit at a specified index
* @n: A pointer to the number to change
* @index: index of the bits to be checked
* Return:return 1 on success and -1 if fails
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int new;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	new = (n >> index) & 1;
	return (new);
}

