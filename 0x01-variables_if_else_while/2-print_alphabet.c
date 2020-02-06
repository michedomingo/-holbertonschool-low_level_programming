#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: Print lowercase alphabet with putchar
 * Return: 0
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar (i);
	}
	putchar ('\n');
	return (0);
}
