#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to array of words
 * Return: str with words capitalized
 */

char *cap_string(char *str)
{
	int a, b;
	char sym[] = " ;,.!?{}()\t\n\"";

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; sym[b] != '\0'; b++)
		{
			if (a == 0)
			{
				if (str[a] >= 'a' && str[a] <= 'z')
					str[a] = str[a] - 32;
			}
			if (str[a] == sym[b])
			{
				if (str[a + 1] >= 'a' && str[a + 1] <= 'z')
				{
					str[a + 1] = str[a + 1] - 32;
				}
			}
		}
	}
	return (str);
}
