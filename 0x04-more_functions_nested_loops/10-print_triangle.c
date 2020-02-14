#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 *
 */

void print_triangle(int size)
{
	int len, height, space;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}

	for (len = 0; len < size; len++)
	{
		space = size - len;
		for (height = 1; height <= size; height++)
		{
			if (height < space)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
