#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * *malloc_checked - a function that allocates memory using malloc.
* @b: integer.
 * Return: return a pointer to the allocated memory
 */


void *malloc_checked(unsigned int b)
{
void *p;

p = malloc(b);

if (p == NULL)
{
	exit(98);
}

return (p);

}
