#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to array of integer
 * @size: integary array size
 * @cmp: pointer to function to be used to compare values
 * Return: index number of integer in array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
			return (index);
	}
	return (-1);
}
