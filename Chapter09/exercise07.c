//
// Created by jwelborn on 9/15/18.
//
#include <stdio.h>
#include <stdlib.h>

int pow(int x, int n);

int main(void) {
    printf("Enter x and n: ");
    int x, n;
    scanf("%d %d", &x, &n);
    printf("x^n = %d", pow(x, n));
}

int pow(int x, int n) {
    if (n == 0) {
        return 1;
    }
    if (n % 2 ==0) {
        return pow(x, n/2) * pow(x, n/2);
    }
    return x * pow(x, n - 1);
}
