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
 * char *_strncat - appends the src string to the dest string
 * @dest: pointer to destination to concantenate src string to
 * @src: pointer to string to use n bytes from
 * @n: amount of bytes from src to append to dest
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destLength, index;

	destLength = _strlen(dest);

	for (index = 0; index < n && src[index] != '\0'; index++)
	{
		dest[destLength + index] = src[index];
	}
	return (dest);
}
