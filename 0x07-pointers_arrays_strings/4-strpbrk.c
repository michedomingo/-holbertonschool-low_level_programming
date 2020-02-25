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

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to array of char string
 * @accept: pointer to char to locate
 * Return: pointer to byte in s matches bytes in accept/NULL if byte not found
 */

char *_strpbrk(char *s, char *accept)
{
	for (; *s; s++)
	{
		if (_strchr(accept, *s) != 0)
			return ((char *) s);
	}
	return (0);
}
