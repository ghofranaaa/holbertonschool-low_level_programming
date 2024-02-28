#include <string.h>
#include "main.h"
/**
 * _strlen - a function that returns the length of a string.
 * @s: pointer to a string.
 * Description: calculating the length of a string.
 * Return: length of the string.
*/
int _strlen(char *s)
{
int len = 0;

while (*s)
{len++;
s++;
}
return (len);
}
