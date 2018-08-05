//
// Created by jwelborn on 8/5/18.
//
#include <stdio.h>

/**
 * Exercise 4 asks the student to promt the user for a dollar amount, and print the dollar amount to the command
 * line with a 5% tax applied.
 *
 * @return 0
 */
int main(void) {
    printf("Enter an amount: ");
    float amount;
    scanf("%f", &amount);
    printf("With tax added: $%.2f", amount * 1.05);
    return 0;
}