#include "variadic_functions.h"

/**
 * print_strings - prints variable amount of strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the functions
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *ptr;
	unsigned int i;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(strings, char*);
		if (ptr)
		{
			printf("%s", ptr);
		}
		else
			printf("(nil)");

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(strings);
}
