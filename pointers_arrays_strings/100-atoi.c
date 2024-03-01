#include <string.h>
#include "main.h"

/**
 * _atoi - a function that convert a string.
 * @s: pointer to the string.
 * Description: converting a string to an integer.
 * Return: 0.
 **/
int _atoi(char *s)
{
int a = 0;
int b = 1;

if (*s == '-')
{
b = -1;
s++;
}
else if (*s == '+')
{
s++;
}


while (*s)
{
if (*s >= '0' && *s <= '9')
{
a = a * 10 + (*s - '0');
}
else
{

break;
}
s++;
}
return (a * b);
}
