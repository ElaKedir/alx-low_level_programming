#include "main.h"

/**
* main - Entry point
* print_alphabet -  p
* return: Alwyas 0 (success)
*/

void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
}