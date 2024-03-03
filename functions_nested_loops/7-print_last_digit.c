#include <stdio.h>
#include "main.h"
/**
* print_last_digit - a function that prints the last digit of a number.
* @n: the number.
* Description: printing last digit of a number.
* Return: the value of last digit.
*/
int print_last_digit(int n)
{
int i;

	i = n % 10;
	if (i < 0)
	{
		i = i * -1;
	}
	_putchar(i + '0');
return (i);

}
