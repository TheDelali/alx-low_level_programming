#include "main.h"

/**
 * print_alphabet_x10 -prints the alphabet 10 times, in lowercase
*/

void print_alphabet_x10(void)
{
	char letter;
	int j = 0;

	while (j < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');

		j++;
	}
}
