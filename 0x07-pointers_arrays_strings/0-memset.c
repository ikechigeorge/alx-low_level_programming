#include "main.h"

/**
 * *_memset- A function that fills memory
 * @s: A pointer to the memory area
 * @b: The constant byte to be used
 * @n: The number of bytes to be filled
 *
 * Return: change array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int u = 0;

	for (; n > 0; u++)
	{
		s[u] = b;
		n--;
	}
	return (s);
}
