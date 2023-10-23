#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _memset - memset function usage
 * @s: the name of the array
 * @b: the the characters to be printed
 * @n: the size of the memory to print
 *
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
return (memset(s, b, n));
}
