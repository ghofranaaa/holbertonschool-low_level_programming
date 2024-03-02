#include <string.h>
#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: the first character to compare.
 * @s2: the second character to compare.
 * Return: negative if character is less than 0, positive if character
 * is greater than 0, otherwise 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, c = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && c == 0)
	{
		c = s1[i] - s2[i];
		i++;
	}
	return (c);
}
