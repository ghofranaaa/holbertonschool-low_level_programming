#include <stdio.h>
/**
* main - Entry point of the program
*
* Description: prints alphabet in lowercase, followed by a line.
*
* Return: Always 0.
**/
int main(void)
{
char currentChar = 'a';

while (currentChar <= 'z')
{
	putchar(currentChar);
	currentChar++;
}

putchar('\n');

return (0);

}
