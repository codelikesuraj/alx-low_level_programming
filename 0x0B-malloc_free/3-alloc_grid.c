#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a
 * 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to the 2 dimensional
 * array or NULL on failure or when
 * height or width is zero or negative.
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width < 1 || height < 1)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
