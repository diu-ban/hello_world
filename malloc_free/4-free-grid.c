#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid previously created by alloc_grid
 * @grid: pointer to the 2D grid
 * @height: the height of the grid
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i++ < height)
	{
		free(grid[i]);
	}
	free(grid);
}
