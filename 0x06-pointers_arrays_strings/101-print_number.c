#include "main.h"

/**
 * print_number -prints any integer with putchar
 * @n: number to print
*/

void print_number(int n)
{
	unsigned int a;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	a = n;

	if (a / 10)
		print_number(x / 10);

	_putchar(x % 10 + '0');
}
