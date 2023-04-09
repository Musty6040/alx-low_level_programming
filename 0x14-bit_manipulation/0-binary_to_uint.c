#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - To converts a binary number to an unsigned int
 * @b: A pointer to the string of binary number
 *
 * Return: the converted number on success and 0 if fails
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int ui_val = 0;

	if (b == NULL)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		ui_val = 2 * ui_val + (b[j] - '0');
	}

	return (ui_val);
}

