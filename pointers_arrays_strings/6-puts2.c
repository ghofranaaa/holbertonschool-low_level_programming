#include <string.h>
#include "main.h"

/**
 * puts2 - a function that prints characters of a string.
 * @str: pointer to a string.
 * Description: printing every other character of a string,
 *followed by a new line.
 */
void puts2(char *str)
{
int i;
int len = 0;
while (str[len] != '\0')
	{	len++;
			}
for (i = 0; i < len; i += 2)
{
	_putchar(str[i]);
}
_putchar('\n');
}
