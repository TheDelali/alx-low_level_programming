#include <stdlib.h>
#include "main.h"

/**
 * free_grid -frees previously created 2d array
 * @grid: grid to be worked on
 * @height: height of the drid
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
