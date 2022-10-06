#include "main.h"
#include <stdlib.h>

/**
 * *free_grid - free twon dimensinal grid
 *
 * @grid: pointer to pointer
 *
 * @height: height of array
 *
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
