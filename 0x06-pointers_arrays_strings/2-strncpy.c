#include "holberton.h"

/**
 * char *_strncpy - copies a string from src to dest
 * @dest: pointer to dest string to copy, starting from index 0
 * @src: pointer to string to to be copied
 * @n: number of chars to copy/size of dest
 * Return: pointer to dest with edited string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
