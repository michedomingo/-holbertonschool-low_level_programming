#include "search_algos.h"

/**
 * print_array - prints current array
 * @array: array to print
 * @start: starting index incremented
 * @end: increment up to this size
 */

void print_array(int *array, unsigned int start, unsigned int end)
{
	unsigned int i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}

/**
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	unsigned int start = 0;
	unsigned int end = size - 1;
	unsigned int mid;

	if (!array)
		return (-1);

	while (start <= end)
	{
		print_array(array, start, end);
		mid = (start + end) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			end = mid - 1;
		else if (array[mid] < value)
			start = mid + 1;
	}

	return (-1);
}
