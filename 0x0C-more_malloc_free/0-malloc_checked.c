#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - A function that allocates memory using malloc
 * @b: integer
 *
 * Return: A pointer to the allocated memory
 *
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (!ptr)
	{
		exit(98);
	}

	return (ptr);
}
