#include "holberton.h"

/**
 * char *_strcpy - copies the string by src pointer, to buffer by dest pointer
 * @dest: pointer to destination of string to copy
 * @src: pointer to char string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
