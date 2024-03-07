#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* _sqrt_recursion - a function that returns the natural
 * square root of a number.
 * @i: integer.
 * @n: the number.
 * Description: returning the natural square root of a number.
 * Return: the natural square root oof n.
 **/
int _sqrt_recursion(int n)

{
	return (_sqr(n, 1));
}

/**
 * _sqr - helper function.
 * square root of a number.
 * @i: integer.
 * @n: the number.
 * Description: returning the natural square root of a number.
 * Return: the natural square root oof n.
 **/

int _sqr(int n, int i)
{

	if (i * i == n)
	{
		return (i);
	}
	else if (i * i < n)
	{
		return (_sqr(n, i + 1));
	}
	else
	{
		return (-1);
	}
}
