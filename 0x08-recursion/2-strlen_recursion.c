#include "main.h"

/**
 * _strlen_recursion - a funtion that print lenght of a string
 *
 * @s: lenght of the string
 *
 * Return: lenght
 *
 */
int _strlen_recursion(char *s)
{
	int lenght = 0;

	if (*s != '\0')
	{
		lenght++;
		lenght = (lenght + _strlen_recursion(s + 1));
	}

	return (lenght);
}
