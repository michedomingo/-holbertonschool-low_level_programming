#include "holberton.h"

/**
 * _strlen - return the length of a string
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
 * _strdup - return pointer to new allocated space with duplicate string
 * @str: pointer to string input to copy
 * Return: pointer to duplicated string, otherwise NULL
 */

char *_strdup(char *str)
{
	char *ptr;
	int size, c;

	if (str == NULL)
		return (NULL);

	size = _strlen(str) + 1;
	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (c = 0; c < size; c++)
		ptr[c] = str[c];

	ptr[c] = '\0';

	return (ptr);
}
