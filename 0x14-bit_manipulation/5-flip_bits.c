#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip.
 * @n: the first number.
 * @m: the second number.
 *
 * Return: number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int tmp = n ^ m;
	unsigned int count = 0;

	while (tmp > 0)
	{
		count = count + (tmp & 1);
		tmp >>= 1;
	}

	return (count);
}
