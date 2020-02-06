#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: Print lowercase then uppercase alphabet with putchar
 * Return: 0
 */

int main(void)
{
	char i, j;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar (i);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar (j);
	}
	putchar ('\n');
	return (0);
}
