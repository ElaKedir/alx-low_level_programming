#include "main.h"
#include <string.h>

/**
 * set_string - sets the value of a pointer to a character
 * @s: the pointer.
 * @to: the character.
 * Return: 0 (success).
 */

void set_string(char **s, char *to)
{
	*s = to;
}
