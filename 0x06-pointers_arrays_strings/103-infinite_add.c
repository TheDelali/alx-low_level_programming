#include "main.h"
#include <string.h>

/**
 * infinite_add -adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer that will store result
 * @size_r: buffer size
 *
 * Return: r or 0
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int i, j;

	/* Reverse the input strings */
	for (i = 0, j = len1 - 1; i < j; i++, j--)
	{
		char tmp = n1[i];

		n1[i] = n1[j];
		n1[j] = tmp;
	}
	for (i = 0, j = len2 - 1; i < j; i++, j--)
	{
		char tmp = n2[i];

		n2[i] = n2[j];
		n2[j] = tmp;
	}

	/* Add the digits */
	for (i = 0; i < size_r - 1 && (i < len1 || i < len2 || carry); i++)
	{
		int d1 = i < len1 ? n1[i] - '0' : 0;
		int d2 = i < len2 ? n2[i] - '0' : 0;
		int sum = d1 + d2 + carry;

		carry = sum / 10;
		r[i] = sum % 10 + '0';
	}

	/* Check if the result fits in the buffer */
	if (i == size_r - 1 && (i < len1 || i < len2 || carry))
	{
		return (0);
	}

	/* Reverse the result string and null-terminate it */
	r[i] = '\0';
	for (j =0, i--; j < i; j++, i--)
	{
		char tmp = r[i];

		r[i] = r[j];
		r[j] = tmp;
	}

	return (r);
}
