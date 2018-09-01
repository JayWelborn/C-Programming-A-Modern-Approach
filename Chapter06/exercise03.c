//
// Created by jwelborn on 9/1/18.
//
#include <stdlib.h>
#include <stdio.h>

int gcd(int a, int b);

int main(void) {
    printf("Enter a fraction: ");
    int num, denom;
    scanf("%d/%d", &num, &denom);
    int common = gcd(num, denom);
    printf("In lowest terms: %d/%d", num / common, denom / common);
    return EXIT_SUCCESS;
}

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}