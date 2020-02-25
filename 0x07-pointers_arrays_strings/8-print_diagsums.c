#include "holberton.h"
#include "stdio.h"

/**
 * print_diagsums - prints the sum of two diagonals of square matrix of ints
 * @a: pointer to array
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int sumA = 0;
	int sumB = 0;

	for (i = 0; i < size; i++)
		sumA += a[(size + 1) * i];

	for (j = 0; j < size; j++)
		sumB += a[(size - 1) * (j + 1)];

	printf("%d, %d\n", sumA, sumB);
}
