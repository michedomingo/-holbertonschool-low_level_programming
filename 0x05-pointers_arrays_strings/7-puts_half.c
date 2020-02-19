#include "holberton.h"

/**
 * puts_half - prints the second half of a string
 * - if odd # of chars, print (length - 1) / 2
 * @str: pointer to char string
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
