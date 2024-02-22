#include <stdio.h>
/**
* main - Entry point of the program
*
* Description: print all single digit numbers, followed by a line.
*
* Return: Always 0.
**/
int main(void)
{
int x = 0;

while (x <= 9)
{
	putchar(x + '0');

x++;
}
putchar('\n');
return (0);
}
