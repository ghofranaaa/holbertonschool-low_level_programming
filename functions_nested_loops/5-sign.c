#include <stdio.h>
#include "main.h"
/**
* print_sign - checks for alphabetic character.
* @n: the character to check.
* Return: 1 if n is greater than 0, 0 if n is equal to 0, -1 if less than 0.
*/
int print_sign(int n)
{

if (n > 0)
{
	_putchar('+');
	return (1);
}
else if (n == 0)
{
	_putchar(0 + '0');
	return (0);
}
else if (n < 0)
{
	_putchar('-');
	return (-1);
}
else
{
	return (0);
}
}
