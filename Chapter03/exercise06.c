//
// Created by jwelborn on 8/18/18.
//
#include <stdio.h>

/**
 * Program to allow user to add two fractions. Displays resulting fraction not reduced to lowest common denominator.
 */
int main(void) {
    int num1, den1, num2, den2;
    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d", &num1, &den1, &num2, &den2);
    int den_result = den1 * den2;
    int num_result = (num1 * den2) + (num2 * den1);
    printf("The sum is %d/%d", num_result, den_result);

    return 0;
};