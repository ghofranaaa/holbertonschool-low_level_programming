#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * *str_concat - a function that returns a pointer to a newly
 * allocated space in memory.
 * @s1: pointer to the string.
 * @s2: pionter to a string.
 *
 * Return: pointer to a newly allocated space in memory,
 * or null if it fails.
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int length = 0;
	int i, j;
	char *p;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;


	while (s2[len2] != '\0')
		len2++;

	length = len1 + len2;

	p = malloc(sizeof(char) * (length + 1));
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		p[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		p[i + j] = s2[j];
	}
	p[length] = '\0';
	return (p);
	free(p);
}
