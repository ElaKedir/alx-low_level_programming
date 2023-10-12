#include <stdio.h>
#include "main.h"

/**
* more_numbers - that prints numbers from 0 to 9 except 2 and 4.
* Return: 0 (Success)
*/

void more_numbers(void)
{
int i, j;

for (j = 0; j < 10; j++)
{
for (i = 0; i <= 14; i++)
{
if (i > 9)
{
putchar((i / 10) + '0');
}
putchar((i % 10) + '0');
}
putchar('\n');
}

}
