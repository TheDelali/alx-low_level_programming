#include <stdio.h>

/**
 * main -prints all the numbers of base 16 in lowercase
 *
 * Return: 0
*/
int main(void)
{
	int x;
	char letter;

	for (x = 0; x <= 10; x++)
		putchar((x % 10) + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
