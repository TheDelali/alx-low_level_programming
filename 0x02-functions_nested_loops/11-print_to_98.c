#include "main.h"

/**
 * print_to_98 -print all natural numbers from n to 98
 * @n: number passed to the function
*/

void print_to_98(int n)
{
	int i, j;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%d,", i);
			else if (i == 98)
				printf("%d\n", i);
		}
	}
	else if (n > 98)
	{
		for (j = n; j > 98; j--)
		{
			printf("%d,", i);
		}
	}
}
