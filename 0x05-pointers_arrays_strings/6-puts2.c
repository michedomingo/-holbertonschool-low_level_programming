#include "holberton.h"

/**
 * puts2 - prints every other char of a string, starting with 1st char
 * @str: pointer to character string
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
