#include "main.h"

/**
 * factorial - function that return a given factorial of a number
 * @n: number of factorial
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
