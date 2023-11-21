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
	int zod;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}

	copy = malloc((strlen(str) + 1) * sizeof(str));
	if (copy == NULL)
	{
		return (NULL);
	}
	for (zod = 0; str[zod]; zod++)
	{
		copy[zod] = str[zod];
	}

	copy[strlen(str)] = '\0';
	return (copy);
}
