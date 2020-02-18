#include "holberton.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to int value
 * @b: pointer to int value
 */

void swap_int(int *a, int *b)
{
	int var = *a;

	*a = *b;
	*b = var;
}
