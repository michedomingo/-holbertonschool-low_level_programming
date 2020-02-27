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

/**
 * is_char - check char
 * @str: pointer to string to count
 * @length: integer
 * Return: palindrome
 */

int is_char(char *str, int length)
{
	if (length <= 0)
		return (1);
	if (str[0] == str[length - 1])
	{
		return (is_char(str + 1, length - 2));
	}
	else
		return (0);
}

/**
 * is_palindrome - checks if string is a palindrome
 * @s: pointer to char string to be counted
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	if (length <= 1)
		return (1);
	else
		return (is_char(s, length));
}
