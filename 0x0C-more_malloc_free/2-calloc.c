#include "main.h"
#include <stdlib>

/**
 * _memset -fills memory with a constant byte
 * @b: constant byte
 * @n: number of bytes to be filled
 * @s: pointer to memory area to be filled with constant byte
 *
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

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
	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
		return (NULL);

	_memset(m, 0, sizeof(int) * nmemb);

	return (m);
}
