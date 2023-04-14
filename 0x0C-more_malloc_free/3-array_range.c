#include "main.h"

/**
 * array_range -creates an array of integers
 * @min: startpoint
 * @max: endpoint
 *
 * Return: an array or NULL
 */

int *array_range(int min, int max)
{
	int len, i;
	int *p;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	p = malloc(sizeof(int) * len);
	if (!p)
		return (NULL);
	for (i = 0; i < len; i++)
		p[i] = min++;
	return (p);
}
