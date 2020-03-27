#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string of 0 and 1 chars
 * Return: converted number, otherwise 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0, base = 1;
	int length = 0;

	if (!b)
		return (0);

	for (; b[length]; length++)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
	}

	for (length--; length >= 0; length--, base *= 2)
	{
		if (b[length] == '1')
			total += base;
	}
	return (total);
}
