#include "holberton.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer to dest array to copy into
 * @src: pointer to copy src array frm
 * @n: number of elements to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
