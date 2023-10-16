#include <stdio.h>
#include "main.h"

void print_number(int n) {
    if (n == 0) {
        putchar('0');
        return;
    }

    if (n < 0) {
        putchar('-');
        n = -n;
    }

    int divisor = 1;
    while (n / divisor > 9) {
        divisor *= 10;
    }

    while (divisor > 0) {
        putchar((n / divisor) + '0');
        n %= divisor;
        divisor /= 10;
    }
}