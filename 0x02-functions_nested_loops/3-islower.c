#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* _islower - checks whether or not the letter is lowercase.
* @c: is the charcter to be checked
* Return: 0 (Success)
*/

int _islower(int c)
{
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
}
