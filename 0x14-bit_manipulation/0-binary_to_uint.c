#include "main.h"

/**
* binary_to_uint - A function that convert binary to an unsigned
* @b: A binary number
*
* Return: Unsigned int
*/

unsigned int binary_to_uint(const char *b)

{
	unsigned int x;
	int size;
	int b_two;

	if (b == NULL)
	{
	return (0);
	}
	x = 0;
	for (size = 0; b[size] != '\0'; size++)
	
	for (size--, b_two = 1; size >= 0; size--, b_two *= 2)
	{
	if (b[size] != '0' && b[size] != '1')
	{
	return (0);
	}
	if (b[size] & 1)
	{
	x += b_two;
	}							        }
	return (x);
}
