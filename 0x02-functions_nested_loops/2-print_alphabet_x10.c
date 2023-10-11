#include "main.h"
#include <stdio.h>


/**
* print_alphabet_x10 - Prints 10 rows of the whole alphabet in lowercase.
*/

void print_alphabet_x10(void)
{
int i;
int j = 0;
while (j < 10)
{
i = 'a';
while (i <= 'z')
{
_putchar(i);
i++;
}
_putchar('\n');
j++;
}
}
