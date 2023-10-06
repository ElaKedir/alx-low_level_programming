#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: 1 (Success)
 */

int main(void)
{
char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(STDERR_FILENO, str, strlen(str));
return (1);
}

