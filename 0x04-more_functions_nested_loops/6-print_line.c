#include "main.h"

/**
 * print_line - Funtion that draws a straight line in a terminal
 *
 * @n: is the number of times the character _ should be printed
 *
 *Return: void
 *
 */

void print_line(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			putchar('_');
		}
		putchar('\n');
	}
}
