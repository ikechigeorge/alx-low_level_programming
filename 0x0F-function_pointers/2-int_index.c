#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - functions that searches integer
 * @array: array of integers
 * @size: size of integer
 * @cmp: pointter to the function int
 *
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]))
		{
			return (j);
		}
	}
	return (-1);
}
