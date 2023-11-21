#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int zod;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (zod = 0; zod < i; zod++)
			{
				free(grid[zod]);
				free(grid);
				return (NULL);
			}
		}

		for (zod = 0; zod < width; zod++)
		{
			grid[i][zod] = 0;
		}
	}

	return (grid);
}
