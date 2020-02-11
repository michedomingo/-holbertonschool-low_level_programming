#include "holberton.h"

/**
 * _abs - computes absolute value of an integer
 * @n: integer to compute
 * Return: 0
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
