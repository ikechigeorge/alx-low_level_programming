#include "main.h"

/**
 * binary_to_uint -  converts a binary number to an unsigned int.
 * @b: binary number as string.
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int j = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] == '0' || b[j] == '1')
		{
			num <<= 1;
			if (b[j] == '1')
			{
				num += 1;
			}
		}
		else
		{
			return (0);
		}
	}
	return (num);
}
