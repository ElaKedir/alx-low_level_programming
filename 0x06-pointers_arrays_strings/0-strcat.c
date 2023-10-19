#include "main.h"
#include <string.h>

/**
*_strcat - a function to append a string into another.
*@dest: The string that is going to be appended to
*@src: The string that will be appended
*Return: 0 (Success)
*/

char *_strcat(char *dest, char *src)
{
    char *temp;
temp = strcat(dest, src);
return (temp);
}
