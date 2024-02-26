#include <stdio.h>
#include "main.h"
/**
 * print_numbers - Prints the numbers from 0 to 9 followed by a new line.
 *
 * Description: This function prints the numbers 0 through 9,
 * followed by a new line character ('\n').
 */

void print_numbers(void)
{
	int a;

for (a = '0'; a <= '9'; a++)
{
_putchar(a);
}
_putchar('\n');
}
