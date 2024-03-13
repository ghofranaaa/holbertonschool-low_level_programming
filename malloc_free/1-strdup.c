#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * *_strdup - a function that returns a pointer to a newly
 * allocated space in memory.
 * @str: pointer to the string.
 *
 * Return: pointer to the duplicated string,
 * or null if insufficient memory was available.
 */

char *_strdup(char *str)
{
char *p;
int len = strlen(str);
int i;
if (str == NULL)
{
	return (NULL);
}
p = malloc(sizeof(char) * (len + 1));
if (p == NULL)
{
	return (NULL);
}
for (i = 0; i < len; i++)
{
	p[i] = str[i];
}
p[len] = '\0';
return (p);
free(p);
}

