#include <stdio.h>
#include "main.h"

/**
* _isupper - checks for uppercase character.
* @c: is the character to be checked.
* Return: it returns 1 if it's uppercase, 0 otherwise.
*/
int _isupper(int c)
{

if (c >= 'A' && c <= 'Z')
{
	return (1);
}
else
{
	return (0);
}

}
