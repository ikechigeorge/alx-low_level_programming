#include "main.h"
/**
 * _puts - prints a string, follow by a new line.
 * @str: string
 *
 * Return: new line
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar (*str++);
	}
	_putchar ('\n');
}
