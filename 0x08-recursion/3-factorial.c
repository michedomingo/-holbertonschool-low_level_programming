#include "holberton.h"

/**
 * factorial - returns the factorial of a given number
 * @n: integer number
 * Return: if n is lower than 0, return -1 for error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n >= 1)
		return (n * factorial(n - 1));

	else
		return (1);
}
