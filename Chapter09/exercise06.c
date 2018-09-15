//
// Created by jwelborn on 9/15/18.
//
#include <stdio.h>
#include <stdlib.h>

int horners(int x);

int main(void) {
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);
    printf("Horners: %d", horners(x));
}

int horners(int x) {
    return (((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6);
}