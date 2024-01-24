#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function
 * @array: array of integer
 * @size: size of the integer
 * @action: pointer to the void function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
