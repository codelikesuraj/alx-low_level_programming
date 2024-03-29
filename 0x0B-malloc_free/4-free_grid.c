#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2-dimensional
 * grid previously created by our
 * alloc_grid() function
 * @grid: the 2-D array
 * @height: the height of the grid
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
