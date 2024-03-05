#include <string.h>
#include "main.h"

/**
 * _puts_recursion - a function that prints a string.
 * @s: pointer to a string.
 * Description: printing a string, followed by a new line.
 */



void _puts_recursion(char *s)
{

if (*s == 0)
{
_putchar('\n');
return;
	}
	_putchar(*s);
_puts_recursion(s + 1);
}
