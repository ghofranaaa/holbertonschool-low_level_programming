#include <string.h>
#include "main.h"
/**
 * _puts - a function that prints a string.
 * @str: pointer to a string.
 * Description: printing a string.
*/
void _puts(char *str)
{
int i;
while (str[i] != '\0')
{
	_putchar(str[i]);
	i++;
}
_putchar('\n');
}
