#include <stdio.h>
#include "main.h"

/**
 * main -prints the largest prime factor of 612852475143
 *
 * Return: 0
*/

int main(void)
{
	long n, maxp;
	long number = 612852475143;
	double square = sqrt(number);

	for (n = 1; n <= square; n++)
	{
		if (number % n == 0)
		{
			maxp = number / n;
		}
	}
	printf("%ld\n", maxp);

	return (0);
}
