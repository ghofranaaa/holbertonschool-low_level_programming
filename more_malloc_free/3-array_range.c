#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * *array_range - a function that allocates memory for an array.
 * @min: elements of array.
 * @max: size of array.
 * Return: return the pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int i;
	int *p;
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	p = malloc(size * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		p[i] = min + i;
	}
	return (p);
}
