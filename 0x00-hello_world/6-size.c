#include <stdio.h>
#include <stdint.h>

/**
* main - Entry point
*
* Return: 0 (succes)
*/

int main(void)
{
printf("Size of a char: %zu bytes(s)", (unsigned long)sizeof(char));
printf("Size of an int: %zu bytes(s)", (unsigned long)sizeof(int));
printf("Size of a long int: %zu bytes(s)", (unsigned long)sizeof(long int));
printf("Size of a long long int: %zu bytes(s)", (unsigned long)sizeof(long long int));
printf("Size of a float: %zu bytes(s)", (unsigned long)sizeof(float));
return (0);
}
