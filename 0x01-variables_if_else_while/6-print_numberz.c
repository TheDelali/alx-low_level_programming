#include <stdio.h>

/**
 * main -prints all single digit numbers of base 10 with putchar function
 *
 * Return: 0
*/
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		putchar((x % 10) + '0');
	putchar('\n');
	return (0);
}
