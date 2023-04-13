#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc -  a function that allocates memory for an array
 * @nmemb: memory of the array
 * @size: size of the integer
 *
 * Return: Pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	memset(ptr, 0, nmemb * size);

	return (ptr);
}
