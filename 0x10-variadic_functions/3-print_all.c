#include "variadic_functions.h"

/**
 * printChar - print char element from va_list
 * @ap: va_list char type argument parameter
 */
void printChar(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * printInt - print int element from va_list
 * @ap: va_list int type argumemt parameter
 */
void printInt(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * printFloat - print float element from va_list
 * @ap: va_list float type argument parameter
 */
void printFloat(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * printString - print string element from va_list
 * @ap: va_list string argument parameter
 */
void printString(va_list ap)
{
	char *ptr;

	ptr = va_arg(ap, char*);

	if (ptr == NULL)
	{
		ptr = "(nil)";
	}
	printf("%s", ptr);
}

/**
 * print_all - prints any data type input
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *separator;
	int i, j;

	check data[] = {
		{"c", printChar},
		{"i", printInt},
		{"f", printFloat},
		{"s", printString},
		{NULL, NULL}
	};

	va_start(ap, format);

	i = 0;
	separator = "";

	while (format && format[i])
	{
		j = 0;
		while (data[j].type != NULL)
		{
			if (format[i] == data[j].type[0])
			{
				printf("%s", separator);
				data[j].prints(ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
