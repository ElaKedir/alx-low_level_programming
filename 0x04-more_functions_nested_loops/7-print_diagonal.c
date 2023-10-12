#include <stdio.h>
#include "main.h"

/**
* print_diagonal - a functions that prints diagonal line.
* @n: the number of times the character _ is drawn
* Return: 0 (Success)
*/

void print_diagonal(int n)

{

if (n <= 0)
{
putchar('\n');
}
else
{
int i, j;

for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
if (j == i)
putchar('\\');
else if (j < i)
putchar(' ');
}
putchar('\n');
}
}
}
