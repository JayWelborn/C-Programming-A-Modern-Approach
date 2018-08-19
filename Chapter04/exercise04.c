//
// Created by jwelborn on 8/19/18.
//
#include <stdio.h>
/**
 * Program to convert a decimal number to an octal number
 */
int main(void) {
    printf("Enter a number between 0 and 32767: ");
    int in, out = 0, count = 1;
    scanf("%d", &in);
    while (in > 0) {
       out += (in % 8) * count;
       count *= 10;
       in /= 8;
    }
    printf("In octal, your number is: %05d", out);
    return 0;
}