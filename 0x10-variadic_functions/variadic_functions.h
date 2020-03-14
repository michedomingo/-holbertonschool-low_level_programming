#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void printChar(va_list ap);
void printInt(va_list ap);
void printFloat(va_list ap);
void printString(va_list ap);

/**
 * struct checkType - pointer to print_all
 * @type: pointer to argument input
 * @prints: pointer to function to print data type
 */

typedef struct checkType
{
	char *type;
	void (*prints)();
} check;

#endif /* VARIADIC_FUNCTIONS_H */
