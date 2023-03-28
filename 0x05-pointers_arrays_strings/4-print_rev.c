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
	for (int i = len - i; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
