#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: number of times character \ should be printed
 * Return: 0
 */

void print_diagonal(int n)
{
	int i, j;

	if (n < 1)
		_putchar('\n');

	for (i = 1; i <= n; i++)
	{
		for (j = 2; j <= i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
