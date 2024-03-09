#include <stdio.h>
/**
* main - Prints the arguments passed into the program,
* followed by a new line.
* @argc: argument count.
* @argv: argument vector.
* Description: printing the arguments of the program.
* Return: Always 0.
**/

int main(int argc, char **argv)
{
int i;
for (i = 0; i < argc; i++)
{
	printf("%s\n", argv[i]);
}
return (0);
}
