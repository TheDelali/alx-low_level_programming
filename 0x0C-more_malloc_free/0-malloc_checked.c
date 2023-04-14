#include "main.h"

/**
 * malloc_checked -allocates memory using malloc
 * @b: size of memory allocated
 *
 * Return: pointer to array initialised or NULL
 */

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == 0)
		exit(98);

	return (m);
}
