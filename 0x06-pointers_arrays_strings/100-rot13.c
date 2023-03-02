#include "main.h"

/**
 * rot13 - a functonn that encodes a string using rot 13
 * ONE if, TWO loops only...
 * @n: input
 * Return: decrypted string
 */
char *rot13(char *n)
{
	int y, rot_c = 13, k = 0;
	char toswap[] = {'A', 'N', 'a', 'n', 'B', 'O', 'b', 'o', 'C', 'P',
		'c', 'p', 'D', 'Q', 'd', 'q', 'E', 'R', 'e', 'r', 'F', 'S', 'f',
		's', 'G', 'T', 'g', 't', 'H', 'U', 'h', 'u', 'I', 'V', 'i', 'v',
		'J', 'W', 'j', 'w', 'K', 'X', 'k', 'x', 'L', 'Y', 'l', 'y', 'M',
		'Z', 'm', 'z'};

	while (n[k] != '\0')
	{
		for (y = 0; y <= 51; y++)
		{
			if (n[k] == toswap[y])
			{
				n[k] = n[k] + rot_c;
				y = 51;
			}
			rot_c = rot_c * -1;
		}
		k++;
	}
	return (0);
}
