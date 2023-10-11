#include <stdio.h>
#include "main.h"

/**
* print_last_digit - a functions that displays the last digit of a number.
* @n: the vriable integer that will be checked in the function
* Return: 0 (Success);
*/

int print_last_digit(int n)
{
int i;
scanf("%d", &i);
if (i < 0)
{
i = -1 * i;
}
n = i % 10;
putchar(n + '0');
return (0);
}

