#include <string.h>
#include "main.h"

/**
 * *_strncpy - a function that copies a string.
 * @src: pointer to the string that will be copied.
 * @dest:  pointer to the destination.
 * @n: maximum number of characters to be copied from source.
 * Description: copying a string including the terminatin null byte
 * to a buffer.
 * Return: the pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
	dest[i] = src[i];
}

for (; i < n; i++)
{
dest[i] = '\0';
}

return (dest);
}
