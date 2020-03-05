#include "holberton.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements needed for array
 * @size: bytes needed per element to be allocated for array
 * Return: pointer to allocated memory, otherwise NULL if fail
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int index;

	if ((nmemb == 0) || (size == 0))
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (index = 0; index < (nmemb * size); index++)
		ptr[index] = 0;

	return (ptr);
}
