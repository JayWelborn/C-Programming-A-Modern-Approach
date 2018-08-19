//
// Created by jwelborn on 8/19/18.
//
#include <stdio.h>
/**
 * Program to reverse digits of a three digit number using / and %
 */
int main(void) {
    printf("Enter a three-digit number: ");
    int in;
    scanf("%d", &in);
    printf("The reversal is: %d%d%d\n", in % 10, (in % 100) / 10, in / 100);
    return 0;
}