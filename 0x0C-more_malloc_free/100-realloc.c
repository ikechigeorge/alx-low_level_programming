#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: new integer size
 * @new_size: old side of the integer
 *
 * Return: NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ab = NULL;

	if (new_size == 0)
	{
		free(ptr);
	}
	else if (ptr == 0)
	{
		ab = malloc(new_size);
	}
	else
	{
		ab = malloc(new_size);
		if (ab != NULL)
		{
			memcpy(ab, ptr, old_size < new_size ? old_size : new_size);
			free(ptr);
		}
	}
	return (ab);
}
