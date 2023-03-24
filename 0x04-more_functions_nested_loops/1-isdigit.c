#include "main.h"

/**
 *  isdigit - A function that checks for a digit 0 through 9
 *
 * @c:char that a digit
 *
 *Return: 1 or 0
 *
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);

}
