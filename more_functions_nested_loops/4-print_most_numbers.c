#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0 to 9 except 2 & 4,
 * followed by a new line.
 * Description: This function prints the numbers 0 through 9 except 2 & 4
 * followed by a new line character ('\n').
 */
void print_most_numbers(void)
{
int i;
for (i = 0; i <= 9; ++i)
{
if (i != 2 && i != 4)
{
putchar(i + '0');
}
}
_putchar('\n');
}
