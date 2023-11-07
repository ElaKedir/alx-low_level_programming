#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Function to check if a string contains only digits
int isPositiveNumber(const char *str) {
    while (*str) {
        if (!isdigit(*str)) {
            return 0;
        }
        str++;
    }
    return 1;
}

// Function to perform multiplication
long long int multiply(long long int num1, long long int num2) {
    return num1 * num2;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    if (!isPositiveNumber(argv[1]) || !isPositiveNumber(argv[2])) {
        printf("Error\n");
        return 98;
    }

    long long int num1 = atoll(argv[1]);
    long long int num2 = atoll(argv[2]);

    long long int result = multiply(num1, num2);

    printf("%lld\n", result);

    return 0;
}

