#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - return index place if comparison = true, else -1
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer to func of one of the 3 in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);

	for (k = 0; k < size; k++)
	{
		if (cmp(array[k]) != 0)
			return (k);
	}
	return (-1);
}
