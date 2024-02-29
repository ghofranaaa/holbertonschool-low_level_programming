#include <stdio.h>
#include "main.h"

/**
 * print_array - a function that prints elements of an array.
 * @a: pointer.
 * @n:  number of elements.
 * Description: printing half of a string,
 *followed by a new line.
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
	printf("%d", a[i]);

if (i < n - 1)
{
printf(", ");
}
}
printf("\n");
}
