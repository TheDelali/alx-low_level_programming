#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int mul(char *num1, char *num2);

/**
 * main -multiplies two positive numbers
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 or 98
 */

int main(int argc, char **argv)
{
	char *num1 = argv[1];
	char *num2 = argv[2];
	int len1 = strlen(num1);
	int len2 =strlen(num2);
	int i, result;
	
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	for (i = 0; i < len1; i++)
	{
		if (!isdigit(num1[i]))
		{
			printf("Error\n");
			return (98);
		}
	}

	for (i = 0; i < len2; i++)
	{
		if (!isdigit(num2[i]))
		{
			printf("Error\n");
			return (98);
		}
	}

	result = mul(num1, num2);
	printf("%d\n", result);

	return (0);
}

/**
 * mul -multiplies two numbers
 * @num1: a number to be multiplied
 * @num2: a number to be multiplied
 *
 * Return: result of multiplication
 */
int mul(char *num1, char *num2)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int i, j;
	int i_n1 = 0;
	int i_n2 = 0;
	int *result = (int*)calloc(len1 + len2, sizeof(int));
	int result_len;
	int finalresult;

	for (i = len1 - 1; i >= 0; i--)
	{
		int carry = 0;
		int n1 = num[i] - '0';
		i_n2 = 0;

		for (j = len2 - 1; j >= 0; j--)
		{
			int n2 = num2[j] - '0';
			int sum = n1 * n2 + result[i_n1 + i_n2] + carry;
			carry = sum / 10;
			result[i_n1 + i_n2] = sum % 10;
			i_n2++;
		}

		if (carry > 0)
		{
			result[i_n1 + i_n2] += carry;
		}

		i_n1++;
	}

	i = len1 + len2 - 1;

	while (i >= 0 && result[i] == 0)
	{
		i--;
	}

	if (i == -1)
	{
		return (0);
	}
	result_len = i + 1;
	finalresult = 0;

	for (j = 0; j < result_len; j++)
	{
		finalresult = finalresult * 10 + result[j];
	}

	free(result);

	return (finalresult);
}
