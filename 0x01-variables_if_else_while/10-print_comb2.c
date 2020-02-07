#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: Print the numbers from 00 to 99
 * Return: 0
 */

int main(void)
{
	int i = 0;

	while (i < 100)
	{
		putchar ('0' + (i / 10));
		putchar ('0' + (i % 10));

		if (i < 99)
		{
			putchar (',');
			putchar (' ');
		}
		i++;
	}
	putchar ('\n');
	return (0);
}
