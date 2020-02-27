#include "holberton.h"

int helper(int n, int i);

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: input
 * Return: natural square root, otherwise -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	else
		return (helper(n, 1));
}

/**
 * helper - checks if natural square root
 * @n: input
 * @i: counter
 * Return: -1 if not natural square root
 */

int helper(int n, int i)
{
	if (n == (i * i))
		return (i);
	if (n > (i * i))
		return (helper(n, i + 1));
	else
		return (-1);
}
