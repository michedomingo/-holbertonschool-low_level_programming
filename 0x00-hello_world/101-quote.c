#include "stdio.h"
#include "string.h"
#include "unistd.h"

/**
 * main - print a string without printf or puts
 * Return: 1
 */

int main(void)
{
	int i;

	i = strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");

	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", i);
	return (1);
}
