#include "main.h"
#include <ctype.h>
#include <string.h>

/**
* *string_toupper - a function to to reverse an array of integers .
* @str: The array string
* Return: 0 (Success)
*/

char *string_toupper(char *str)
{
int i;
int length = strlen(str);

for (i = 0; i < length; i++)
{
*(str + i) = toupper(*(str + i));
}
return (str);
}
