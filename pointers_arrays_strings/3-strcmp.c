#include <string.h>
#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: pointer to the first string.
 * @s2:  pointer to the second string.
 * Description: comparing two strings.
 * Return: negative if character of s1 is less than s2,
 * positive if character of s1 is greater than s2, otherwise 0.
 * **/
int _strcmp(char *s1, char *s2)
{
int len = 0;
int i;
while (s1[len] && s2[len] != '\0')
{
len++;
}
for (i = 0; i < len; i++)
{
if (s1[i] < s2[i])
{
	return (-15);
}
else if (s1[i] > s2[i])
{
	return (15);
}
}
return (0);
}


