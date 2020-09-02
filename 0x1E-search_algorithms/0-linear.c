#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int index;

	if (!array)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%i] = [%i]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
