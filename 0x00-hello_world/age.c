#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
* main - Entry
*Return: 0 (Success)
*/

int main (void)

{
    char grade;
    int age;
    char home;
    printf("What is your grade? ");
    scanf ("%c", &grade);
    printf("Your grade is %c.\n", grade);
    printf("%d\n", 5 + 6);
    printf("What is your age? \n");
    scanf("%d", &age);
    printf("You are %d years old.\n", age);
    printf("where do you live?\n");
    scanf("%s", &home);
    printf("I live in %s.\n", home);
    return 0;
}
