#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * free_grid - a function that grees a 2 dimensional grid.
 * @grid: the grid.
 * @height: the height of the grid.
 *
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
