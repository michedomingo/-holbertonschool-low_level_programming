#include "variadic_functions.h"

/**
 * sum_them_all - adds variable number of integers
 * @n: constant unsigned int
 * Return: sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list addList;
	unsigned int i;
	int sum;

	va_start(addList, n);

	if (n == 0)
		return (0);

	for (i = 0, sum = 0; i < n; i++)
	{
		sum += va_arg(addList, unsigned int);
	}
	va_end(addList);

	return (sum);
}
