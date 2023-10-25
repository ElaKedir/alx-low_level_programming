#include <stdio.h>
/**
 * _puts_recursion - the function
 * @s: the string
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
if (*s != '\0')
{
putchar(*s);
_puts_recursion(s + 1);
}
else
{
printf("\n");
}
}

