#include "main.h"
#include <string.h>

/**
 * _strspn - the function
 * @s: the source string.
 * @accept: the condition.
 * Return: 0 (success).
 */

unsigned int _strspn(char *s, char *accept)
{
return strspn(s ,accept);
}
