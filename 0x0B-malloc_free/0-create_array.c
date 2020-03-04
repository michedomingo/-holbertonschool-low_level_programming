#include "holberton.h"

/**
 * create_array - creates a char array and initializes it with a specific char
 * @size: lenght of array of chars
 * @c: specific char to initialize array
 * Return: pointer to the array, NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = malloc((size) * sizeof(char));
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ar[i] = c;

	return (ar);
}
