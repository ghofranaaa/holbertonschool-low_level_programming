#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - a function that returns the value of an integer raised
 * to the power of another.
 * @y: base integer.
 * @x: exponent integer.
 * Description: returning the value of x powered by y.
 * Return: the value of x raised to the power of y.
 **/

int _pow_recursion(int x, int y)
{
if (y == 0)
{
	return (1);
}
else if (y > 0)
{
	return (x * _pow_recursion(x, y - 1));
}
else
{
	return (-1);
}
}
