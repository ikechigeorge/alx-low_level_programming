#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: 0
 *
 */
int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;

	printf("%d\n", result);

	return (0);
}
