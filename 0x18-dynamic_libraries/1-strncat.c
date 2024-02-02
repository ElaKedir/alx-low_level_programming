#include "main.h"
#include <string.h>

/**
* _strncat - a function to append a string into another with a defined size.
* @dest: The string that is going to be appended to
* @src: The string that will be appended
* @n: The number of bytes dest will take
* Return: 0 (Success)
*/

char *_strncat(char *dest, char *src, int n)
{
char *temp;
temp = strncat(dest, src, n);
return (temp);
}
