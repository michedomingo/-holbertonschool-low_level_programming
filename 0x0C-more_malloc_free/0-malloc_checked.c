#include "holberton.h"
#include <limits.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned int multiplied by sizeof data type
 * Return: pointer to allocated memory, otherwise 98 if failed
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
