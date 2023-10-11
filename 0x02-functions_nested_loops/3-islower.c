#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
* _islower - checks whether or not the letter is lowercase.
*/

int _islower(int c)
{
if (islower(c))
_putchar('1');
else
_putchar('0');
return (0);
}
