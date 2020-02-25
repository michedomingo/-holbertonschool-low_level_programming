#include "holberton.h"

/**
 * _strstr - locate substring in another string
 * @haystack: pointer to array to search
 * @needle: pointer to substring
 * Return: pointer to beginning of substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;

			if (needle[j + 1] == '\0')
				return (haystack + i);
		}
	}
		return (0);
}
