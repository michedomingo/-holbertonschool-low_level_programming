#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @s: pointer to char string
 * Return: s
 */

char *leet(char *s)
{
	int i, j;

	char box1[] = "aeotl";
	char box2[] = "AEOTL";
	char encode[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; box1[j] != '\0' && box2[j] != '\0'; j++)
		{
			if (s[i] == box1[j] || s[i] == box2[j])
				s[i] = encode[j];
		}
	}
	return (s);
}
