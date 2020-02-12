#include "holberton.h"

/**
 * print_times_table - prints the n times table
 * @n: times table number
 * Return: 0
 */

void print_times_table(int n)
{
	int x, y, num;

	if (n <= 0 || n >= 15)
		return;

	x = 0;
	while (x <= n)
	{
		y = 0;
		while (y <= n)
		{
			num = x * y;
			if (num > n)
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
			}
			else if (y != 0)
			{
				_putchar(' ');
				_putchar(num + '0');
			}
			else
			{
				_putchar(num + '0');
			}
			if (y != n)
			{
				_putchar(',');
				_putchar(' ');
			}
			y++;
		}
		x++;
		_putchar('\n');
	}
}
