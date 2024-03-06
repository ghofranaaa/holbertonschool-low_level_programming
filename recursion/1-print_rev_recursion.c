#include <string.h>
#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse.
 * @s: pointer to a string.
 * Description: printing a string in reverse, followed by a new line.
 */



void _print_rev_recursion(char *s)
{


if (*s == 0)
{
return;
	}
_print_rev_recursion(s + 1);
	_putchar(*s);

}

