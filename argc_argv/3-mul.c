#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - a program that multiplies two numbers,
 * followed by a new line.
 * @argc: argument count.
 * @argv: argument vector.
 * Description: a program that multiplies two numbers.
 * Return: 0, otherwise 1 .
 **/

int main(int argc, char **argv)
{

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
