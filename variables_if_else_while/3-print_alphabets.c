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
char abc = 'A';

while (currentChar <= 'z')
{
	putchar(currentChar);
	currentChar++;
}
while (abc <= 'Z')
{
	putchar(abc);
	abc++;
}
putchar('\n');

return (0);

}
