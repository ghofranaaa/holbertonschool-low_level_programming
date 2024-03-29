#include "main.h"
#include <stdio.h>
/**
 * *_memset - takes pointer to a data type as parameter
 * and updates the value of it.
 * @s: pointer to the area.
 * @b: constant value.
 * @n: number of bytes.
 * * Description: pointer to an int as parameter updates its value.
 * Return: pointer to the memory area.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;
	char *p = s;

	for (count = 0; count < n; count++)
	{
		p[count] = b;
	}

	return (p);
}
