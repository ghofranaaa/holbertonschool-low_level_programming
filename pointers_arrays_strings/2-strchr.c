#include <string.h>
#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to the string.
 * @c: The character to be located.
 * Description: This function locates the first occurrence
 * of the character c in the string s.
 * Return: Returns a pointer to the first occurrence
 * of the character c in the string s, or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
int i;
int len = 0;

for (i = 0; i != s[len]; i++)
{
	if (s[i] == c)
	{
		return (&s[i]);
	}
}

return (NULL);
}
