#include "holberton.h"

/**
 * times_table - prints the 9 times table
 * Return: 0
 */

void times_table(void)
{
	int x, y, num;

	x = 0;
	while (x <= 9)
	{
		y = 0;
		while (y <= 9)
		{
			num = x * y;
			if (num > 9)
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
			if (y != 9)
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
