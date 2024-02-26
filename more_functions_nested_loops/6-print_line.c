#include <stdio.h>
#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * followed by a new line.
 * @n: is the number of times the character _ should be printed.
 * Description: This function draws a straight line in the terminal
 * followed by a new line character ('\n').
 */
void print_line(int n)
{
int i;
if (n <= 0)
{
	_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}


