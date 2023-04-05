#include "main.h"

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
	for (unsigned int i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return s;
}
