#include "holberton.h"

/**
 * main - entry point
 * Description: Print Holberton, followed by a new line.
 * Return: 0
 */

int main(void)
{
	char print[] = "Holberton";
	int x = 0;

	while (print[x] != '\0')
	{
		_putchar(print[x]);
		x++;
	}
	_putchar ('\n');
	return (0);
}
