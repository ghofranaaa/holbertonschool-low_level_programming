#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings- a function that prints strings, followed by a new line.
* @n: number of strings passed to the function.
* @separator: the string to be printed between the strings.
* Description: printing strings.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list arg;
unsigned int i;
char *j;

va_start(arg, n);
for (i = 0; i < n; i++)
{
	j = va_arg(arg, char *);
if (j != NULL)
{
printf("%s", j);
}
else
{
printf("(nil)");
}

if (i < n - 1 && separator != NULL)
{
	printf("%s", separator);
}
}
printf("\n");
va_end(arg);
}
