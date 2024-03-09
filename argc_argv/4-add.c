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

int main(int argc, char *argv[])
{
	int n = 0;
	char *s;

	while (--argc)
	{
		for (s = argv[argc]; *s; s++)
			if (*s < '0' || *s > '9')
				return (printf("Error\n"), 1);
		n = n + (atoi(argv[argc]));
	}
	printf("%d\n", n);
	return (0);
}
