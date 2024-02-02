#include "main.h"
#include <string.h>

/**
* _strncpy - a function to copy strings with a defined size.
* @dest: The string that is going to be copied into
* @src: The string that will be copied
* @n: The number of bytes dest will take
* Return: 0 (Success)
*/

char *_strncpy(char *dest, char *src, int n)
{
return (strncpy(dest, src, n));
}
