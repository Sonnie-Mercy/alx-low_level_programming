#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the 2d grid created
 * @grid: grid to be freed
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
