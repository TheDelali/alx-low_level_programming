#include "function_pointers.h"

/**
 * int_index -searces for an integer
 * @array: array of integers
 * @size: the size of the array
 * @cmp: pointer to function to compare the values
 *
 * Return: if no element matches -1 otherwise
 *  returns the index of the first element for
 *  which the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
