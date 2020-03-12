#include "function_pointers.h"

/**
 * array_iterator - executes a function as a parameter of an array
 * @array: char string parameter
 * @size: array length
 * @action: pointer to function needed to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action == NULL)
		return;

	if (size <= 0)
		return;

	if (array == NULL)
		return;

	for (i = 0; i < (int)size; i++)
		action(array[i]);
}
