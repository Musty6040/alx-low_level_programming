#include "main.h"

/**
 * leet - a function that encodes a strings into 1337
 * ONE if, TWO loops only...
 * @n: input
 * Return: Always 0 (Success)
 */
char *leet(char *n)
{
	int j, r;
	int find[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int replacer[] = {'4', '3', '0', '7', '1'};

	for (j = 0; n[j] != '\0'; j++)
	{
		for (r = 0; r <= 9; r++)
		{
			if (n[j] == find[r])
			{
				n[j] = replacer[r / 2];
				r = 9;
			}
		}
	}

	return (n);
}

