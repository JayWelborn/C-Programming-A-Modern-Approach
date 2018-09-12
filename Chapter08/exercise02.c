//
// Created by jwelborn on 9/12/18.
//
#include <stdio.h>
#include <stdlib.h>

#define DIGITS 10

int main(void) {
    int digits[DIGITS] = {0};
    printf("Enter a number: ");
    long int input = 0;
    scanf("%ld", &input);

    int digit = -1;
    do {
        digit = input % 10;
        digits[digit]++;
        input /= 10;
    } while (input > 0);

    printf("Digit:       ");
    for (int i = 0; i < DIGITS; i++) {
        printf("%3d", i);
    }
    printf("\n");

    printf("Occurrences: ");
    for (int i = 0; i < DIGITS; i++) {
        printf("%3d", digits[i]);
    }
    printf("\n");
}
