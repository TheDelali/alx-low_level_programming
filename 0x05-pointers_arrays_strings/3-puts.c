#include "main.h"

/**
 * _puts -prints a string
 * @str: character of the string
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
