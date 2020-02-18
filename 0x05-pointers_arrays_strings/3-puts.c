#include "holberton.h"

/**
 * _puts - prints a string then a new line, to stdout
 * @str: pointer to character string
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

        _putchar('\n');
}
