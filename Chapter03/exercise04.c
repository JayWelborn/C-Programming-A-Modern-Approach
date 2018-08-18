//
// Created by jwelborn on 8/17/18.
//
#include <stdio.h>

/**
 * Program to accept as input an ISBN, and display it broken down into its component parts.
 */
int main(void) {
    int area, first, last;
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &area, &first, &last);
    printf("You entered %03d.%03d.%04d\n", area, first, last);

    return 0;
};