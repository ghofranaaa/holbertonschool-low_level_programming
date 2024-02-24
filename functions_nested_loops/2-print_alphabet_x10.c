#include <stdio.h>
#include "main.h"
/**
* print_alphabet_x10 - Printing 10 times the alphabet in lowercase,
* followed by a new line.
*/
void print_alphabet_x10(void)
{
int i = 0;
char letter;

while (i <= 9)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
	_putchar(letter);
}

_putchar('\n');

i++;
}
}
