#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: pointer to the array.
 * @size: size of the array.
 * @cmp: pointer to a function.
 * Description: deraching for an integer.
 * Return: if no element matches return -1, if size <= 0 return -1.
*/


int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0 || array == NULL || cmp == NULL)
return (-1);

for (i = 0; i < size; i++)
{
	cmp(array[i]);

if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}
