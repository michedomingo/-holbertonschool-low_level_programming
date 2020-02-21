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
 * char *_strcat - appends the src string to the dest string
 * @dest: pointer to destination to concantenate src string to
 * @src: pointer to string to overwrite null byte/append at end of dest
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int destLength, index;

	destLength = _strlen(dest);

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[destLength + index] = src[index];
	}
	dest[destLength + index] = '\0';
	return (dest);
}
