#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - creates a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Pointer to the newly created 2D array (grid)
 *         or NULL on failure or if width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int **grid;

	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	return (grid);
}
