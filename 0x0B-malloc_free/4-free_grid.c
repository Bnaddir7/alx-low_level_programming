#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dim
 * @grid: the address of a 2 dim
 * @height: element of grid
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
