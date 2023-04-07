#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: number to calculate the sqare root
 * Return: the square root
 *
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return int (actual_sqrt_recursion);
}

/**
 * actual_sqrt_recursion - recures to find the natural square root of a number
 * @n: number to calculate the square root of
 * @i: iterator
 *
 * Return: the square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (actual_sqrt_recursion(n, i + 1));
}
