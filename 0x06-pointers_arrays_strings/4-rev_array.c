#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: number of elements to swap
 */

void reverse_array(int *a, int n)
{
	int index, temp;

	for (index = 0; index < (n / 2); index++)
	{
		temp = a[index];
		a[index] = a[n - index - 1];
		a[n - index - 1] = temp;
	}
}
