#include "main.h"
/**
 * Positive_or_negative - checking for negative or positive integers.
 *@i: the numbers to be checked
 * Return: 0 always
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
