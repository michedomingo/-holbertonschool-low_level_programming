#include "holberton.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: double pointer to array/argument vector
 * Return: pointer to concatenated arguments as strings, Null if fail
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int count, count1, count2, len;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (count = 0; count < ac; count++)
	{
		for  (count1 = 0; av[count][count1] != '\0'; count1++)
		{
			len += 1;
		}
		len += 1;
	}
	len += 1;

	ptr = malloc(len * sizeof(char));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	count2 = 0;
	for (count = 0; count < ac; count++)
	{
		for  (count1 = 0; av[count][count1] != '\0'; count1++)
		{
			ptr[count2] = av[count][count1];
			count2++;
		}
		ptr[count2] = '\n';
		count2++;
	}
	ptr[count2] = '\0';
	return (ptr);
}
