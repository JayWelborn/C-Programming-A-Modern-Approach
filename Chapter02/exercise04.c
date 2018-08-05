//
// Created by jwelborn on 8/5/18.
//
#include <stdio.h>

int main(void) {
    printf("Enter an amount: ");
    float amount;
    scanf("%f", &amount);
    printf("With tax added: $%.2f", amount * 1.05);
    return 0;
}