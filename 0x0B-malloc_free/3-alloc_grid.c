#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dim array of integers
 * @width: element of the grid
 * @height: element of the grid
 *
 * Return: return NULL
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
		}
		free(grid);
		return (NULL);
	}
	for (j = 0; j < width; j++)
	{
		grid[i][j] = 0;
	}
	return (grid);
}