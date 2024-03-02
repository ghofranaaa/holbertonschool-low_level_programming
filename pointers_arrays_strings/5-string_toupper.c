#include <string.h>
#include "main.h"

/**
 * *string_toupper - a function that changes all lowercase letters
 * to uppercase.
 * @s: pointer to a string.
 * Description: changing all lowercase letters to uppercase.
 * Return: uppercase.
 */
char *string_toupper(char *s)

{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - ('a' - 'A');
}
}
return (s);
}
