#include "holberton.h"

/**
 * print_last_digit - prints last digit of a number
 * @num: integer to print last digit
 * Return: value of last digit
 */

int print_last_digit(int num)
{
	int lastDigit;

	if (num >= 0)
	{
		lastDigit = num % 10;
	}
	else
	{
		lastDigit = (num % 10) * -1;
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}
