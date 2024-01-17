#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *_strdup - duplicate to new memory space location
 * @str: string character to be copied.
 * Return: 0
 */

char *_strdup(char *str)
{
	int zod, i;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	copy = malloc(sizeof(char) * (i + 1));
	if (copy == NULL)
	{
		return (NULL);
	}
	for (zod = 0; str[zod]; zod++)
	{
		copy[zod] = str[zod];
	}

	return (copy);
}
