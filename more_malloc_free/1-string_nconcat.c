#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * *string_nconcat - a function that concatenates two strings.
 * @s1: pointer to the string.
 * @s2: pionter to a string.
 * @n: size of old allocated space in memory.
 * Return: pointer to a newly allocated space in memory,
 * or null if it fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *p;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i, j = 0;

	if (s1 == NULL)

		s1 = "";

	if (s2 == NULL)

		s2 = "";

	while (s1[len1] != '\0')

		len1++;

	while (s2[len2] != '\0')

		len2++;

	if (n >= len2)
		n = len2;

	p = malloc(sizeof(char) * (len1 + n + 1));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		p[i] = s1[i];
	}
		for (j = 0; j < n; j++)
		{
			p[i + j] = s2[j];
		}
		p[i + j] = '\0';

	return (p);
}

