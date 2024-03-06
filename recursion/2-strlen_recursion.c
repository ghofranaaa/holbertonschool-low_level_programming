#include <string.h>
#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: pointer to a string.
 * Description: returning the length of a string, followed by a new line.
 * Return: length of the string.
 **/

int _strlen_recursion(char *s)
{

if (*s == '\0')
{
	return (0);
}
return (1 + _strlen_recursion(s + 1));
}
