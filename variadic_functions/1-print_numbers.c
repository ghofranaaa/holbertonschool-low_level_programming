#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line.
* @n: number of integers passed to the function.
* @separator: the string to be printed between numbers.
* Description: printing numbers.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
int j;

va_start(args, n);
for (i = 0; i < n; i++)
{
	j = va_arg(args, int);
	printf("%d", j);

if (separator != NULL)
printf("%s", separator);
}
	printf("\n");
va_end(args);
}

