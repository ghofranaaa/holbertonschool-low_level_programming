#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - a function that prints all natural numbers from n to 98.
 * @n: number to start from.
 * Description: printing natural numbers from n to 98,
 * followed by a new line.
 */
void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
if (n == 98)
{
	printf("%d", n);
	printf("\n");
break;
}
else
{
	printf("%d, ", n);
}
}
}
else
{
for (; n >= 98; n--)
{
if (n == 98)
{
	printf("%d", n);
	printf("\n");
break;
}
else
{
	printf("%d, ", n);
}
}
}
}
