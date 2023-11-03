#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * multiply - multiplies the numbers
 * @num1: the first number
 * @num2: the second number
 * Return: no return.
 */

void multiply(const char *num1, const char *num2)
{
	int len1, len2, result_len, *result, i, j, k;
	int digit1, digit2, product, pos1, pos2, sum, start;

	len1 = strlen(num1);
	len2 = strlen(num2);
	result_len = len1 + len2;
	result = (int *)calloc(result_len, sizeof(int));

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			digit1 = num1[i] - '0';
			digit2 = num2[j] - '0';
			product = digit1 * digit2;
			pos1 = i + j;
			pos2 = i + j + 1;
			sum = product + result[pos2];
			result[pos1] += sum / 10;
			result[pos2] = sum % 10;
		}
	}
	start = 0;
	while (start < result_len && result[start] == 0)
	{
		start++;
	}
	if (start == result_len)
	{
		printf("0\n");
	} else
	{
		for (k = start; k < result_len; k++)
		{
			printf("%d", result[k]);
		}
		printf("\n");
	}
	free(result);
}

/**
 * main - checks whether the arguments are correct anc calls
 * the multiply function to perform multiplication
 * @argc: the numbr of arguments
 * @argv: argument vector.
 *
 * Return: no return.
 */
int main(int argc, char *argv[])
{
	unsigned int i, j;
	char *num1, *num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1 = argv[1];
	num2 = argv[2];

	for (i = 0; i < strlen(num1); i++)
	{
		if (!isdigit(num1[i]))
		{
			printf("Error\n");
			return (98);
		}
	}

	for (j = 0; j < strlen(num2); j++)
	{
		if (!isdigit(num2[j]))
		{
			printf("Error\n");
			return (98);
		}
	}

	multiply(num1, num2);

	return (0);
}

