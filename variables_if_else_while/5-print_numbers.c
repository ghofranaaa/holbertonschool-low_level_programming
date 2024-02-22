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
printf("%d", x);

x++;
}
printf("\n");
return (0);
}