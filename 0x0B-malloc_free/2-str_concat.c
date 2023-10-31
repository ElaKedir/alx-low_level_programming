#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */

char *str_concat(char *s1, char *s2)

{
	int s1Length, s2Length, i, j;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (s1Length = 0; s1[s1Length] != '\0'; s1Length++)
	{
		;
	}
	for (s2Length = 0; s2[s2Length] != '\0'; s2Length++)
	{
		;
	}

	ptr = malloc(sizeof(char) * (s1Length + s2Length + 1));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
		for (i = 0; i < s1Length; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < s2Length; j++)
	{
		ptr[s1Length + j] = s2[j];
	}
	ptr[s1Length + s2Length] = '\0';
	return (ptr);
}

