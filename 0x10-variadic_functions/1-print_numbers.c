#include "variadic_functions.h"

/**
 * print_numbers - prints variable amount of numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list printNum;
	unsigned int i;

	va_start(printNum, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(printNum, unsigned int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(printNum);
}
