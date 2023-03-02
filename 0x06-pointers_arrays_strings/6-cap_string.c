#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @n: input string
 * Return: caps on first letter of a separator
 */
char *cap_string(char *n)
{
	int j, q;
	int cap = 32;
	int separators[] = {',', ';', '.', '?', '"',
		 '(', ')', '{', '}', ' ', '\n', '\t'};

	for (j = 0; n[j] != '\0'; j++)
	{
		if (n[j] >= 'a' && n[j] <= 'z')
		{
			n[j] = n[j] - cap;
		}

		cap = 0;

		for (q = 0; q <= 12; q++)
		{
			if (n[j] == separators[q])
			{
				q = 12;
				cap = 32;
			}
		}
	}
	return (n);
}
