#include "main.h"

/**
 * free_grid - frees 2 dimensional grid
 * @grid: pointer to grid
 * @height: height of grid
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
