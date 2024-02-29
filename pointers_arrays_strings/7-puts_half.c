#include <string.h>
#include "main.h"

/**
 * puts_half - a function that prints half of a string.
 * @str: pointer to a string.
 * Description: printing half of a string,
 *followed by a new line.
 */
void puts_half(char *str)
{
	int len, i = 0;

while (str[i] != '\0')
{
	i++;
}
len = i - 1;
for (i = (len / 2) + 1; i <= len; i++)
{

_putchar(str[i]);

}
_putchar('\n');
}
