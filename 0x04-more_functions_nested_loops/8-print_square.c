#include <stdio.h>
#include "main.h"

/**
* print_square - a function that prints a square.
* @size: the of the square
* Return: 0 (Success)
*/

void print_square(int size)
{
if (size <= 0)
{
putchar('\n');
}
else
{
int i, j;

for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
putchar('#');
}
putchar('\n');
}
}
}


