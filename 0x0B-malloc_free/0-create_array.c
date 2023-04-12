#include "main.h"
#include <stdlib.h>
/**
 *  *create_array - function that creates an array of chars
 *  @c: character
 *  @size: size of character
 *
 *  Return: array
 */

char *create_array(unsigned int size, char c)
{
	char *a;

	unsigned int j;

	a = malloc(sizeof(char) * size);

	if (size == 0 || a == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
		a[j] = c;
	}
	return (a);
}
