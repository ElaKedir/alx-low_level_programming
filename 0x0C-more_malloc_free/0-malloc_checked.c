#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function thatallocates memory using malloc
 * @b: the memory size that will be allocated
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

