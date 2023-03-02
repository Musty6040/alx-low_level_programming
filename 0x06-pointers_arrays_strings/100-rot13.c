#include "main.h"
#include <stdio.h>

/**
 * rot13 - a function that encodes string using  rot13
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int j;
	int k;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (j = 0; s[j] != '\0'; j++)
	{
		for (k = 0; k < 52; k++)
		{
			if (s[j] == data1[k])
			{
				s[j] = datarot[k];
				break;
			}
		}
	}
	return (s);
}
