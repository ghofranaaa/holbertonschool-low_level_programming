#include <string.h>
#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: the first character to compare.
 * @accept: the second character to compare.
 * Return: Returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */



unsigned int _strspn(char *s, char *accept)
{
int i;
unsigned int len = 0;
int m;
while (*s)
{
m = 0;
for (i = 0; accept[i]; i++)
{
	if (*s == accept[i])
	{
		m = 1;
		break;
	}
}
if (!m)
{
	break;
}
len++;
s++;
}
return (len);
}
