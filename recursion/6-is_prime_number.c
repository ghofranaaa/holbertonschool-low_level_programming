#include <stdio.h>
#include "main.h"
/**
 * is_prime_recursive - checks if a number is prime using recursion.
 * @n: the number to check.
 * @i: the current divisor to check.
 * Return: 1 if the input integer is a prime number, otherwise 0.
 **/
int is_prime_recursive(int n, int i)
{
	if (n <= 1)
		return (0);

	if (i * i > n)
		return (1);

	if (n % i == 0)
		return (0);

	return (is_prime_recursive(n, i + 1));
}

/**
 * is_prime_number - wrapper function for is_prime_recursive.
 * @n: the number to check.
 * Return: 1 if the input integer is a prime number, otherwise 0.
 **/
int is_prime_number(int n)
{
	return (is_prime_recursive(n, 2));
}
