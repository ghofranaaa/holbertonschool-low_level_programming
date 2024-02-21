#include <stdio.h>
/**
* main - Entry point of the program
*
* Description: prints alphabet in lowercase,
* except specific letters, followed by a line.
*
* Return: Always 0.
**/
int main(void)
{
char alpha;

for (alpha = 'a' ; alpha <= 'z' ; alpha++)
{
if (alpha != 'e' && alpha != 'q')
putchar(alpha);
}
putchar('\n');
return (0);
}
