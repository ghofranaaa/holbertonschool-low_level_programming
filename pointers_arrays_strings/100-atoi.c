#include <string.h>
#include "main.h"

/**
 * _atoi - a function that convert a string.
 * @s: pointer to the string.
 * Description: converting a string to an integer.
 * Return: integer value of the converted string.
 **/
int _atoi(char *s)
{
int a = 1;
unsigned int b = 0;

do {
if (*s == '-')
a *= -1;
else if (*s >= '0' && *s <= '9')
b = (b * 10) + (*s - '0');
else if (b > 0)
break;
} while (*s++);

return (b *a);

}
