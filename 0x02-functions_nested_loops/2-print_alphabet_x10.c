#include "main.h"
#include <stdio.h>

/*
*print_alphabet_x10 - prints 1o rows of the whole alphabet in lowercase
*/
void print_alphabet_x10(void)
{
for (int i = 0; i <= 10; i++)
{
for (int j = 'a'; j <= 'z'; j++)
{
putchar(j);
}
if (i != 10)
putchar('\n');
}
}

int main(void)
{
    print_alphabet_x10();
    return 0;
}