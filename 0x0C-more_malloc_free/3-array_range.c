#include "holberton.h"

/**
 * array_range - creates an array of integers
 * @min: int type min value of array
 * @max: int type max value of array
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int *ptr, index;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);

	for (index = 0; min <= max; index++, min++)
		ptr[index] = min;

	return (ptr);
}
