#include "main.h"
#include <stddef.h>
/**
 * print_binary - prints the binary equivalent/replica of a  number
 * @n: the number to be print in binary
 */
void print_binary(unsigned long int n)
{
	int i, ctrl = 0;
	unsigned long int new;

	for (i = 63; i >= 0; i--)
	{
		new = n >> i;

		if (new & 1)
		{
			_putchar('1');
			ctrl++;
		}
		else if (ctrl)
			_putchar('0');
	}
	if (!ctrl)
		_putchar('0');
}

