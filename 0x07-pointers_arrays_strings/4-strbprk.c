#include "main.h"
#include <string.h>

/**
 * _strspn - the function
 * @s: the source string.
 * @accept: the condition.
 * Return: 0 (success).
 */

char *_strpbrk(char *s, char *accept)
{
return (strbrk(s, accept));
}
