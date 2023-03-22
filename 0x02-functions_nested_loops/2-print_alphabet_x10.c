#include "main.h"

/**
 * print_alphabet_x10 -prints the alphabet 10 times, in lowercase
*/

void print_alphabet_x10(void)
{
	char letter;
	int j;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
		for (j = 0; j < 10; j++)
			_putchar('\n');
	}
}
