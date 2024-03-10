#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2D created by alloc_grid
 * @grid: pointer to the 2D grid
 * @height: height of the grid
 * Return: return
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	/*Free each row */
	for (i = 0; i < height; i++)
	{
	free(grid[i]);
	}

	/*Free the array of pointers */
	free(grid);
}
