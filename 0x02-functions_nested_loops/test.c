#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()

{
    double num1;
    double num2;
    char op;

    printf("Input number: ");
    scanf("%lf", &num1);
    printf("Input operator: ");
    scanf(" %c", &op);
    printf("Input number: ");
    scanf("%lf", &num2);

    if(op == '+')
    {
      printf("%f", num1 + num2);
    }
    else if(op == '-')
    {
        printf("%f", num1 - num2);
    }
    else if(op == '*')
    {
        printf("%f", num1 * num2);
    }
    else if(op == '/')
    {
        printf("%d", int (num1 / num2));
    }
    else if(op == '^')
    {
        double result = pow(num1, num2);
        printf("%f\n", result);
    }
    else
    {
        printf("Invalid operation");
    }
      system("pause");

    return 0;
}
