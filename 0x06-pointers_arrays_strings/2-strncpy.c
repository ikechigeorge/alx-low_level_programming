#include "main.h"

/**
 * _strncpy - function that copy a string
 * @dest: destination
 * @src: source
 * @n: variables to be copy
 * Return: dest
 *
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
