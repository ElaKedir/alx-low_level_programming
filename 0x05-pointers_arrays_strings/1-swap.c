#include "main.h"

/**
* swap_int - a functions that swaps the values of two integers
* @a: the first integer
* @b: the second integer
*/

void swap_int(int *a, int *b)
{
int n = *a;
*a = *b;
*b = n;
}
