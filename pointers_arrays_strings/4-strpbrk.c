#include <string.h>
#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: first string.
 * @accept: second string.
 * Return: Returns a pointer to the bytes in s that matches one of the byte
 * in accept, or null if no such byte is found.
 */




char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
	for (i = 0; accept[i]; i++)
	{
	if (*s == accept[i])
	return (s);
	}
	s++;
}
return (NULL);

}
