#include <stdio.h>
/**
* main - Prints the number of arguments passed into the program,
* followed by a new line.
* @argc: argument count.
* @argv: argument vector.
* Description: printing the nummber of arguments of the program.
* Return: Always 0.
**/

int main(int argc, char **argv)
{
	(void)argv;
if (argc > 0)
{
printf("%d\n", argc - 1);
}
return (0);
}
