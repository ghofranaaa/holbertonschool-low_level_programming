#include "function_pointers.h"

/**
 * array_iterator - a function that execute a function given as a parameter.
 * @array: pointer to the array.
 * @size: size of the array.
 * @action: pointer to a function.
 * Description: executing a function given as a parameter
 * on each element of an array..
*/


void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

for (i = 0; i < size; i++)
{
	action(array[i]);
}
}
