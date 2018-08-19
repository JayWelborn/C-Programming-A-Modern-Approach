//
// Created by jwelborn on 8/19/18.
//
#include <stdio.h>
/**
 * Program to reverse digits of a two digit number using / and %
 */
 int main(void) {
     printf("Enter a two-digit number: ");
     int in;
     scanf("%d", &in);
     printf("The reversal is: %d%d\n", in % 10, in / 10);
     return 0;
 }