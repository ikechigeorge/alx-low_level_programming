#include <stdlib.h>

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
	int **my_array;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	my_array = (int **) malloc(sizeof(int *) * height);

	if (my_array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		my_array[i] = (int *) malloc(sizeof(int) * width);
		if (my_array[i] == NULL)
		{
			free(my_array);
			for (j = 0; j <= i; j++)
			free(my_array[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			my_array[i][j] = 0;
		}
	}
	return (my_array);
}
