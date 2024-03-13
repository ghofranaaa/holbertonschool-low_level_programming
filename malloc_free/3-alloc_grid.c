#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * **alloc_grid - a function that returns a pointer to a 2 dimensional
 * array of integers.
 * @width: the width of the grid.
 * @height: the height of the grid.
 *
 * Return: pointer to a 2 dimensional array of integers,
 * or null if it fails.
 */

int **alloc_grid(int width, int height)
{

	int **p;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(height * sizeof(int *));
	if (p == NULL)
		return (NULL);

	for (int i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			for (int j = 0; j < i; j++)
				free(p[j]);
			free(p);
			return (NULL);
		}
		for (int j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}

