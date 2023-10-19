#include "main.h"
#include <string.h>

/**
* reverse_array - a function to to reverse an array of integers .
* @a: The array of integer
* @n: The number of variables in the array
* Return: 0 (Success)
*/

void reverse_array(int *a, int n)
{
int i, temp;
for (i = 0; i < n / 2; i++)

{
temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;
}
}
