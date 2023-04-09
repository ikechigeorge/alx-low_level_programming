#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: argument count of the argv[]
 * @argv: argument vector
 *
 * Return: 0
 *
 */
int main(int argc, char *argv[])
{

	if (argv)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
