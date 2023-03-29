#include "main.h"

/**
 * puts_half -prints half of a string
 * @str: a characrter of the string
*/

void puts_half(char *str)
{
	int length = 0;
	int start;

	while (str[length] != '\0')
		length++;
	if (length + 1 % 2 != '0')
		start = (length - 1) / 2;
	else
		start = (length / 2);
	start++;

	for (length = start; str[length] != '\0'; length++)
	{
		_putchar(str[length]);
	}
	_putchar('\n');
}
