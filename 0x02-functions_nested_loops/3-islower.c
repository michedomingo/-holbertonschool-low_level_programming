#include "holberton.h"

/**
 * int _islower - checks for lowercase character
 * @c: char represented by integer
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
