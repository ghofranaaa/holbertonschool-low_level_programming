#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14,
 * followed by a new line.
 * Description: This function prints the numbers 0 through 9 except 2 & 4
 * followed by a new line character ('\n').
 */
void more_numbers(void)
{
int i, j;

for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j >= 10)

_putchar('1');

_putchar(j % 10 + '0');
}
_putchar('\n');
}
}

