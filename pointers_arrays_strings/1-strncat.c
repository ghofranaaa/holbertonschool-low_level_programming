#include <string.h>
#include "main.h"

/**
 * * *_strncat - a function that concatenates two strings.
 * @src: pointer to the string that will be appended.
 * @dest:  pointer to the destination.
 * @n: is the size of bytes that will be used from src.
 * Description: appending a string into another.
 * Return: the pointer to dest.
 * **/
char *_strncat(char *dest, char *src, int n)
{
int len = 0;
int i;
while (dest[len] != '\0')
{
len++;
}
for (i = 0; i < n && src[i] != '\0'; i++)
{
	dest[len + i] = src[i];
}
dest[len + i] = '\0';
return (dest);


}
