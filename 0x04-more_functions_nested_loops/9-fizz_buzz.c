#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - "Fizz-Buzz test"
 * Description: prints 1 - 100, Fizz for multiples of three,
 *  Buzz for multiples of five, FizzBuss for multiples of both three/five
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i < 100)
			printf(" ");
	}
		printf("\n");
		return (0);
}
