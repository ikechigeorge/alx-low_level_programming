#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat -  A function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: integer
 *
 * Return: concatenates strings
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0;

	char *concat;

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n >= len2)
	{
		n = len2;
	}
	concat = malloc(sizeof(char) * (len1 + n + 1));

	if (concat == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		concat[i + j] = s2[j];
	}

	concat[i + j] = '\0';

	return (concat);
}
