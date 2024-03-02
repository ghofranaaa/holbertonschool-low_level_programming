#include <string.h>
#include <stdio.h>
/**
* *leet - a function that encodes a string to 1337.
* @str: pointer to a string.
* Description: encoding a string to 1337.
*Return: string.
*/


char *leet(char *str)
{
unsigned int i;
char x[] = {'A', 'E', 'O', 'T', 'L'};
int y[] = {4, 3, 0, 7, 1};
char *string = str;

while (*str)
{
for (i = 0; i < sizeof(x) / sizeof(char); i++)
{
	if (*str == x[i] || *str == x[i] + 32)
{
	*str = 48 + y[i];
}
}
str++;
}
return (string);
}
