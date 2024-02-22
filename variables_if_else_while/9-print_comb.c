#include <stdio.h>

/**
* main - Entry point of the program
*
* Description: Prints all possible combinations of single-digit numbers,
* separated by a comma and space, in ascending order.
*
* Return: Always 0.
**/
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);

		if (i < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
