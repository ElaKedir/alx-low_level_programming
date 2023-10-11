#include <stdio.h>
#include "main.h"
/**
* print_sign - Checks the whether the input is negative or positive.
* @n: the character to be input
* Return: 0 (Success)
*/
int print_sign(int n)
{
if (n > 0)
{
return (1);
putchar('+');
}
else if (n == 0)
{
return (0);
putchar('0');
}
else
{
return (-1);
putchar('-');
putchar('1');
}
}
