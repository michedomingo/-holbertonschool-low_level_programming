#include "holberton.h"

/**
 * rot13 - encodes a string using rot13
 * @s: pointer to char array
 * Return: s
 */

char *rot13(char *s)
{
	int i, j;

	char box1[] = "aeotl";
	char box2[] = "AEOTL";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; box1[j] != '\0'; j++)
		{
			if (s[i] == box1[j])
			{
				s[i] = box2[j];
				break;
			}
		}
	}
	return (s);
}
