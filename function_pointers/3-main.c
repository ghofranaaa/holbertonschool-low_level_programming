#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry point
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 * Return: 0 on success, otherwise 98, 99, or 100
 */
int main(int argc, char *argv[])
{
	int num1, num2, res;
	int (*op_function)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op_function = get_op_func(argv[2]);

	if (!op_function)
	{
		printf("Error\n");
		return (99);
	}

	res = op_function(num1, num2);
	printf("%d\n", res);

	return (0);
}
