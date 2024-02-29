#include <string.h>
#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: pointer to a string.
 * Description: reversing a string, followed by a new line.
 */
void rev_string(char *s)
{
int length, i;
char temp;

if (s == NULL)
return;

length = strlen(s);

for (i = 0; i < length / 2; i++)
{
	temp = s[i];
	s[i] = s[length - i - 1];
	s[length - i - 1] = temp;
}
}
