#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name -prints a name
 * @name: the name to be printed
 * @f: a pointer to the function that prints the name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
