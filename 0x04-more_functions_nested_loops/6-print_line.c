#include "main.h"

/**
 * print_line -prints a straight line in the terminal
 * @n: the number of times _ is printed
*/

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('_');
	else
	{
		for (i = n; i <= n; i--)
			_putchar('_');
	}
	_putchar('\n');
}
