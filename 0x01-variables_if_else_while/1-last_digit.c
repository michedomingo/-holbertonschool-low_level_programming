#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: Print whether n is positive, negative, or 0
 * Return: 0
 */

int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	if (lastDigit > 5)
	{
		printf("Last digit of %d is ", n);
		printf("%d and is greater than 5\n", lastDigit);
	}
	else if (lastDigit < 6)
	{
		printf("Last digit of %d is ", n);
		printf("%d and is less than 6 and not 0\n", lastDigit);
	}
	else
	{
		printf("Last digit of %d is ", n);
		printf("%d and is 0\n", lastDigit);
	}
	return (0);
}
