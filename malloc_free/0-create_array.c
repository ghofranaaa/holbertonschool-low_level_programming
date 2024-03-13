#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * *create_array - a function that creates an array of chars.
 * @c: the character to initialize the array with.
 * @size: the size of the array.
 *
 * Return: pointer ti the array, or null if it fails.
 */

char *create_array(unsigned int size, char c)

{
char *array;
unsigned int i;

if (size == 0)
{
	return (NULL);
}
array = (char *)malloc(size * sizeof(char));
if (array == NULL)
{
	return (NULL);
}
for (i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}
