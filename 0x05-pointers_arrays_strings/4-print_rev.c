#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - reverses strings
 * @s: the variable
 * Return - 0 (Success)
 */

void print_rev(char *s)

{
	int i;

	i = strlen(s);
	while (i >= 0)
	{
		putchar(s[i]);
		i--;

	}
	putchar('\n');
}
