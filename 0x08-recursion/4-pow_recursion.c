#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - the function
 * @x: the number to be powered
 * @y: the number of times x is powered by
 * Return: 0 (Success)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

