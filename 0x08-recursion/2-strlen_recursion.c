#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: point to string to count length
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		count = 1;
		return (count + _strlen_recursion(s + 1));
	}
}
