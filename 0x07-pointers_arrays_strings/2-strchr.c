#include "holberton.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to array of char string
 * @c: char in the string s
 * Return: pointer to the 1st char c in string s, or NULL if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	s = 0;
	return (s);
}
