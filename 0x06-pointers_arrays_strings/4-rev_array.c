#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of int
 * @a: array content
 * @n: elements of array content
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int k, temp;

	for (k = 0; k < n; k++)
	{
		n--;
		temp = a[k];
		a[k] = a[n];
		a[n] = temp;
	}
}
