#include <stdio.h>
/**
* main - Prints "printing, followed by a new line.
* @argc: argument count.
* @argv: argument vector.
* Description: printing the name of the program
* Return: Always 0.
**/

int main(int argc, char **argv)
{

int i = 0;
if (i < argc)
{
printf("%s\n", argv[i]);
}
return (0);
}
