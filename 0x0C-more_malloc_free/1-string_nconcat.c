#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenates n number of characters
 * from the first string into the second string
 * @s1: the first string
 * @s2: the second string
 * @n: the number of characters to be appended from the first string
 * into the second string
 * Return: the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int l1 = (s1 != NULL) ? strlen(s1): 0;
	unsigned int l2 = (s2 != NULL) ? strlen(s2): 0;
	unsigned int i, j;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= l2)
	{
		n = l2;
	}

	ptr = malloc(sizeof(char) * (l1 + l2 + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (l1 + 1); i++)
	{
		ptr[i] = s1[i];
	}

	for (j = 0; j <= n; j++)
	{
		ptr[l1 + j] = s2[j];
	}
	ptr[l1 + n] = '\0';
	return (ptr);
}

