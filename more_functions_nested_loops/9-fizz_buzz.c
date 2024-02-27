#include <stdio.h>

/*
* main - Entry point of program
* Desription: using main function for printing Fizz and Buzz for
* multiples of 3, 5 and both of them,
* followed by a new line.
* Return: 0.
*/

int main(void)

{
	int i;

	for (i = 1; i <= 100; i++)
	{

		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}

		else if (i % 3 == 0)
		{
			printf("Fizz");
		}

		else if (i % 5 == 0)
		{
			printf("Buzz");
		}

		else
		{
			printf("%d", i);
		}
		if (i < 100)
		{
			printf(" ");
		}
		}

	printf("\n");
	return (0);

}
