#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
* _isalpha - checks for alphabetic characters.
* @c: the character to be checked.
* Return: 0 (Success)
*/

int _isalpha(int c)
{
if (isalpha(c))
return (1);
else
return (0);
}
