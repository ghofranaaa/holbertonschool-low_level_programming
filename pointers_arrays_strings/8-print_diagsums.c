#include <string.h>
#include <stdio.h>
#include "main.h"
/**
* print_diagsums - a function that prints the sum of two
* diagonals of a square matrix.
* @a: pointer to an integer representing the square matrix.
* @size: integer representing the size of the square matrix.
* Description: printing ths sum of the two diagonals of
* a square matrix of integers.
*/

void print_diagsums(int *a, int size)
{
int sum_p = 0;
int sum_s = 0;
int i = 0;

	for (i = 0; i < size; i++)
	{
	sum_p +=  a[i * size + i];
	}
	for (i = 0; i < size; i++)
	{
	sum_s += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d", sum_p, sum_s);
}
