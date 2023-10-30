#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */

int **alloc_grid(int width, int height)
{
	int **grid_out;
	int row, col;

	if (width < 1 || height < 1)
		return (NULL);

	grid_out = (int **)malloc(height * sizeof(int *));
	if (grid_out == NULL)
		return (NULL);

	for (row = 0; row < height; row++)
	{
		grid_out[row] = (int *)malloc(width * sizeof(int));
		if (grid_out[row] == NULL)
		{
			for (col = 0; col < row; col++)
				free(grid_out[col]);
			free(grid_out);
			return (NULL);
		}
	}

	for (row = 0; row < height; row++)
	{
		for (col = 0; col < width; col++)
		{
			grid_out[row][col] = 0;
		}
	}

	return (grid_out);
}

