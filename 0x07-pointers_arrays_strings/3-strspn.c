#include "main.h"

/**
 * _strspn -gets the length of a prefix substring
 * @s: string to be checked
 * @accept: string to be checked
 *
 * Return: number of bytes in initial segment of s
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int len = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (!accept[j])
			break;
	}

	return (len);
}
