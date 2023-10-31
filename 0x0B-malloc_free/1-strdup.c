#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */

char *_strdup(char *str)
{
	unsigned int length;
	char *duplicate;

	if (str == NULL)
		{
		return (NULL);
		}

	length = strlen(str) + 1;

	duplicate = malloc(sizeof(char) * length);

	if (duplicate == NULL)
		{
		return (NULL);
		}
	strcpy(duplicate, str);
	return (duplicate);
}
