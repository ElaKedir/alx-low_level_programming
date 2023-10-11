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
putchar('+');
return (1);
}
else if (n == 0)
{
putchar('0');
return (0);
}
else
{
putchar('-');
return (-1);
}
}
