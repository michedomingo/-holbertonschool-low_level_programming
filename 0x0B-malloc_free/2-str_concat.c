#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to character
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
 * _strncat - appends the src string to the dest string
 * @dest: pointer to destination to concantenate src string to
 * @src: pointer to string to use n bytes from
 * @n: amount of bytes from src to append to dest
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destLen, index;

	destLen = _strlen(dest);

	for (index = 0; index < n && src[index] != '\0'; index++)
	{
		dest[destLen + index] = src[index];
	}
	return (dest);
}

/**
 * str_concat - allocate space to concatenate two strings
 * @s1: first char string to copy to new array
 * @s2: second char string following s1 to copy to new array
 * Return: new array of concatenated s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int bytes1, bytes2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	bytes1 = _strlen(s1);
	bytes2 = _strlen(s2);

	ptr = malloc(((bytes1 + bytes2) + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	_strncat(ptr, s1, bytes1);
	_strncat(ptr, s2, bytes2);
	ptr += '\0';
	return (ptr);
}
