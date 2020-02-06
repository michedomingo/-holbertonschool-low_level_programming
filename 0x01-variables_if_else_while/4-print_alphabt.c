#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: Print lowercase alphabet with putchar, except q && e
 * Return: 0
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'i' || i == 'q')
			;
		else
			putchar (i);
	}
	putchar ('\n');
	return (0);
}
