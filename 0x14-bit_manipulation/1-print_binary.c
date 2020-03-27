#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to convert from decimal to binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int print = n;
	int index = 0;

	if (!n)
	{
		_putchar('0');
		return;
	}

	for (; (print >>= 1) > 0; index++)
		;

	for (; index >= 0; index--)
	{
		if ((n >> index) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
