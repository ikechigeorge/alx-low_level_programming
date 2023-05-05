#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: integer num to be printed.
 *
 */
void print_binary(unsigned long int n)
{
	int j;
	unsigned long int temp = 1;

	temp <<= (sizeof(unsigned long int) * 8) - 1;

	for (j = 0; j < (int)(sizeof(unsigned long int) * 8); j++)
	{
		if ((n & temp) == 0)
		{
			_putchar('0');
		}
		else
		{
			_putchar('1');
		}
		temp >>= 1;
	}
}
