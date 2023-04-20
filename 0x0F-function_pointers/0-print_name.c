#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - a function that print new name
 *@name: name of the person
 *@f: pointer to the function void
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == 0 && f == 0)
	{
		return;
	}
	(*f)(name);
}
