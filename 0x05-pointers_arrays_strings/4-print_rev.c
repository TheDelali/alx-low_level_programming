#include "main.h"

/**
 * print_rev -prints a string in reverse
 * @s: the character of the string
*/

void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	int i = len - 1;
	for (int i; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
