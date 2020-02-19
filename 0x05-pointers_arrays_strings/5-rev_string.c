#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to string of chars
 * Return: int length of string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}

/**
 * rev_string - reverses a string
 * @s: string of chars to reverse
 */

void rev_string(char *s)
{
	int len = _strlen(s);
	int i = len;
	int count = 0;
	char box;

	for (i--; count < len / 2; i--, count++)
	{
		box = s[count];
		s[count] = s[i];
		s[i] = box;
	}
}
