#include "main.h"

/**
 * _calloc -allocates memory for an array using malloc
 * @nmemb: array length
 * @size: size of each element
 *
 * Return: pointer to alocated memory or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(size * nmemb);

	if (m == 0)
		return (NULL);

	memset(m, 0, size * nmemb);

	return (m);
}
