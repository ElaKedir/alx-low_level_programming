#include <stdio.h>

/**
 * main - fizzbuzz
 * Return: 0 (Success)
 */

int main(void)

{
int i;

for (i = 1; i <= 100; i++)
{
if ((i % 3) == 0)
{
printf("fizz ");
}
else if ((i % 5) == 0 && i != 100)
{
printf("buzz ");
}
else if ((i % 5) == 0 && i == 100)
{
printf("buzz");
}
else
{
if (i < 10)
{
putchar(i + '0');
putchar(' ');
}
else if (i < 100)
{
putchar((i / 10) % 10 + '0');
putchar(i % 10 + '0');
putchar(' ');
}
else
{
putchar((i / 100) % 10 + '0');
putchar((i / 10) % 10 + '0');
putchar(i % 10 + '0');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

