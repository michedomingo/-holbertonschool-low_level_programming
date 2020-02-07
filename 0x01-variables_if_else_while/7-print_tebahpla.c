#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: Print lowercase alphabet with putchar, in reverse
 * Return: 0
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar (i);
	}
	putchar ('\n');
	return (0);
}
