#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to char string array
 * @accept: pointer to char array to check bytes with
 * Return: number of bytes in intial segment of s, includes bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
