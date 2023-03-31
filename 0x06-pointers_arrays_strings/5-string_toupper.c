#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
	int change;

	change = 0;
	while (n[change] != '\0')
	{
		if (n[change] >= 'a' && n[change] <= 'z')
			n[change] = n[change] - 32;
		change++;
	}
	return (n);
}
