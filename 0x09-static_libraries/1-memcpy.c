#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _memcpy - memcpy function usage
 * @dest: the destination data
 * @src: the spurce data
 * @n: the size of the memory to print
 *
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
return (memcpy(dest, src, n));
}
