#include "main.h"

/**
 * _strcat - concatenates two strings dest and src
 * @src: source string
 * @dest: destination string
 * Return: viod
 *
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0')
	{
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';
	return (dest);
}
