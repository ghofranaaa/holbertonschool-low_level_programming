#include <stdarg.h>

/**
 * sum_them_all - a function tha returns the sum of all its parameters.
* @n: int.
* Description: returning the sum of all parameters
* Return: the sum  of all parameters.
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	int total = 0;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
	total += va_arg(arg, int);
	}
	if (n == 0)
	return (0);
	va_end(arg);
		return (total);
}
