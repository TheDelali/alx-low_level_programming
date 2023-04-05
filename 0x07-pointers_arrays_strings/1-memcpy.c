#include "main.h"

/**
 * _memcpy -copies memory area
 * @n: function copies
 * @src: source of copy
 * @dest: destination of copy
 *
 * Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
