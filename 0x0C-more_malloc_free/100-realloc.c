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
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
