#include "main.h"
/**
 * print_rev - print strings in reverse
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int u = 0;
	int i;

	while (*s != '\0')
	{
		u++;
		s++;
	}
	s--;
	for (i = u; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
