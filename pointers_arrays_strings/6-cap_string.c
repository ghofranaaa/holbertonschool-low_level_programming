#include <string.h>
#include "main.h"

/**
 * *cap_string - a function that capitalize all words of a string.
 * @s: pointer to a string.
 * Description: capitalizing all words of a string.
 * Return: string.
 */
char *cap_string(char *s)
{
int i = 0;

if (s[i] >= 'a' && s[i] <= 'z')
{
	s[i] -= 32;
}

for (i = 1; s[i] != '\0'; i++)
{
if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' ||
s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' ||
s[i] == '\"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
{
while (s[i + 1] == ' ' || s[i + 1] == '\t' || s[i + 1] == '\n' ||
s[i + 1] == ',' || s[i + 1] == ';' || s[i + 1] == '.' ||
s[i + 1] == '!' || s[i + 1] == '?' || s[i + 1] == '\"' ||
s[i + 1] == '(' || s[i + 1] == ')' || s[i + 1] == '{' || s[i + 1] == '}')
{
i++;
}


if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
{

s[i + 1] -= ('a' - 'A');
}
}
}
return (s);
}
