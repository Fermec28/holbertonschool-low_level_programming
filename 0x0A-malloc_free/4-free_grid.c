#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - create grid
 * @grid: grid
 * @height: height array
 */
void free_grid(int **grid, int height)
{
	int i;

	if(grid == NULL)
		free(grid);
	for (i = height - 1; i >= 0; i--)
		free(grid[i]);
	free(grid);
}
