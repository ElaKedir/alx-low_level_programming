#include "main.h"

/**
* main - Entry point
* print_alphabet - Prints the lowercase alphabet followed by a new line.
* Return: Alwyas 0 (success)
*/

void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
}
