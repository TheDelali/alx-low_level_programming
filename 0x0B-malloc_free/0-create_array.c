#include "main.h"
#include <stdlib.h>

/**
 * create_array -create an array of chars and initializes it
 * with a specific char
 * @size: the array size
 * @c: a char to initialize to the array
 *
 * Return: NULL or a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array = (char *) malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
