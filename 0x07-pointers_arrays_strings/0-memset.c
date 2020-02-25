#include "holberton.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to array
 * @b: constant byte
 * @n: number of bytes to fill memory area
 * Return: a pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
