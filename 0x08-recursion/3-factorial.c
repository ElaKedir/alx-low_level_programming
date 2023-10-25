#include <stdio.h>
/**
 * factorial - the function
 * @n: the number
 * Return: Always 0.
 */

int factorial(int n)
{
if (n < 0)
	{
	return (-1);
	}
	else if (n == 0 || n == 1)
	{
	return (1);
	}
	else
	{
	return (n = n * factorial(n - 1));
	}
}

