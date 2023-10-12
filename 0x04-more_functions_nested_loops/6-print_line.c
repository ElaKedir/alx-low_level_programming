#include <stdio.h>
#include "main.h"

/**
* print_line - that prints numbers from 0 to 9 except 2 and 4.
* @n: the number of times the character _ is drawn
* Return: 0 (Success)
*/

void print_line(int n)
{
int i;
if (n > 0)
{
for (i = 0; i < n; i++)
{
putchar('_');
}
}
else
putchar('\n');
}
