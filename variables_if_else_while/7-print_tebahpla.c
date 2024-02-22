#include <stdio.h>
/**
* main - Entry point of the program
*
* Description: prints the lowercase alphabet in reverse, followed by a line.
*
* Return: Always 0.
**/
int main(void)

{
char i;

for (i = 'z'; i >= 'a'; i--)
{
	putchar(i);
}

putchar('\n');

return (0);
}


