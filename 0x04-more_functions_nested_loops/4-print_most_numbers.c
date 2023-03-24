#include "main.h"

/**
 * print_most_numbers -prints 0 to 9 with the exception of 2 and 4
*/

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (!(i == '2' || i == '4'))
			_putchar(c);
	}
	_putchar('\n');
}
