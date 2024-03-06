#include <stdio.h>
#include "main.h"

/**
 * factorial - a function that returns the factorial of a number.
 * @n: the given number.
 * Description: returning the factorial of a number, followed by a new line.
 * Return: factorial of n.
 **/

int factorial(int n)
{
if (n > 0)
{
return (n * factorial(n - 1));
}
else if (n == 0)
return (1);
{
return (-1);
}
}
