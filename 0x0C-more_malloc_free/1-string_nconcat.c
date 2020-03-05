#include "holberton.h"

/**
 * _strlen - returns the length of a string
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
 * string_nconcat - concatenates 2 strings with only n bytes of s2
 * @s1: first char string to copy to new array
 * @s2: second char string following s1 to copy to new array
 * @n: number of s2 bytes to follow s1
 * Return: new array of concatenated s1 and s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int index, count, strLen1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	strLen1 = _strlen(s1);
	ptr = malloc((strLen1 + n + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (index = 0, count = 0; index < (strLen1 + n); index++)
	{
		if (index < strLen1)
			ptr[index] = s1[index];
		else
			ptr[index] = s2[count++];
	}
	ptr[index] = '\0';
	return (ptr);
}
