#include "main.h"

/**
 * print_array -prints n elements of an array of integers
 * @a: pointer to array
 * @n: index of array
*/

void print_array(int *a, int n)
{
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		
		if (i < n - i)
		{
			printf(", ");
		}
	}
}
