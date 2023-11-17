#include "main.h"

/**
 * _puts_recursion - A function that print a string
 *
 * @s: a pointer that point to the function
 *
 * Return: void
 *
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
