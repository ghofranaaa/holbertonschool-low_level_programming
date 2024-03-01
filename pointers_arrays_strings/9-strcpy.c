#include <string.h>
#include "main.h"

/**
 * *_strcpy - a function that copies a string.
 * @src: pointer to the string that will be copied.
 * @dest:  pointer to the destination.
 * Description: copying a string including the terminatin null byte
 * to a buffer.
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
int len = 0;
int i;
while (src[len] != '\0')
{
len++;
}

for (i = 0; i <= len; i++)
{
	dest[i] = src[i];
}
return (dest);



}
