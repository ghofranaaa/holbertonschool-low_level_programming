#include "main.h"
#include <stdio.h>
/**
 * *_memcpy - a function that copies memory of area.
 * @src: source of the memory area.
 * @dest: destination of the copied memory area.
 * @n: number of bytes to be copied.
 * * Description: copying memory area.
 * Return: pointer to destination.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
	dest[i] = src[i];
}

return (dest);
}
