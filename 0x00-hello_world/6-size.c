#include <stdio.h>

/**
* main - Entry point
*
* Return: 0 (succes)
*/

int main(void)
{
printf("Size of a char: %lu bytes(s)", (unsigned long)sizeof(char));
printf("Size of an int: %lu bytes(s)", (unsigned long)sizeof(int));
printf("Size of a long int: %lu bytes(s)", (unsigned long)sizeof(long int));
printf("Size of a long long int: %lu bytes(s)", (unsigned long)sizeof(long long int));
printf("Size of a float: %lu bytes(s)", sizeof(float));
return (0);
}
