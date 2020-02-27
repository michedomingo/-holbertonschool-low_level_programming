#include "holberton.h"

/**
 * prime_checker - help check if number is prime
 * @i: int number
 * @j: int number
 * Return: 1 if prime, otherwise 0
 */

int prime_checker(int i, int j)
{
	if (i == j)
		return (1);
	else if (j % i == 0)
		return (0);
	else
		return (prime_checker(i + 1, j));
}

/**
 * is_prime_number - eturns 1 if input integer is a prime number
 * @n: int number
 * Return: 0 if not prime, otherwise 1 if prime
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 0)
		return (0);
	return (prime_checker(2, n));
}
