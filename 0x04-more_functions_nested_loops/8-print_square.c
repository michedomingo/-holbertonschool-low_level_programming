#include "holberton.h"

/**
 * print_square - prints a square
 * @size: size of the square
 * Return: 0
 */

void print_square(int size)
{
	int i, j;

	if (size < 1)
		_putchar('\n');

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
