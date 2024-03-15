#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * *_calloc - a function that allocates memory for an array.
 * @nmemb: elements of array.
 * @size: size of array.
 * Return: If nmemb or size is 0, then _calloc returns NULL.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *p;
unsigned int t;
unsigned int i;
char *ptr;

if (nmemb == 0 || size == 0)
return (NULL);

t = nmemb * size;

p = malloc(t);

if (p == NULL)
return (NULL);

ptr = (char *)p;
for (i = 0; i < t; i++)
{
	ptr[i] = 0;
}
return (p);
}
