#include <stdio.h>
#include "main.h"

/**
* print_last_digit - a functions that displays the last digit of a number.
* @n: the vriable integer that will be checked in the function
* Return: 0 (Success);
*/

int print_last_digit(int n)
{
int a;

if (n < 0)
n = -n;
a = n % 10;
if (a < 0)
a = -a;
_putchar(a + '0');
return (a);
}

