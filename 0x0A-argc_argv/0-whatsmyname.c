#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argv: vector argument of the array
 * @argc: argument count of the argv[]
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int j = 0;

	if (argc > 0)
	{
		printf("%s\n", argv[j]);
	}
	else
	{
		printf("\n");
	}
	return (0);
}
