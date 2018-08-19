//
// Created by jwelborn on 8/19/18.
//
#include <stdio.h>
/**
 * Program to reverse digits of a three digit number using single digit inputs
 */
int main(void) {
    printf("Enter a three-digit number: ");
    int one, two, three;
    scanf("%1d%1d%1d", &one, &two, &three);
    printf("The reversal is: %d%d%d\n", three, two, one);
    return 0;
}