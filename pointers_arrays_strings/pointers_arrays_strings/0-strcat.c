#include <string.h>
#include "main.h"

/**
 * * *_strcat - a function that copies a string.
 * @src: pointer to the string that will be appended.
 * @dest:  pointer to the destination.
 * Description: appending a string into another.
 * Return: the pointer to dest.
 * **/
char *_strcat(char *dest, char *src)
{
int i;
int len = 0;
while (dest[len] != '\0')
{
len++;
}
for (i = 0; src[i] != '\0'; i++)
{
dest[len + i] = src[i];
}
dest[len + i] = '\0';

return (dest);
}

