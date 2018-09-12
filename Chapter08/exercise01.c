//
// Created by jwelborn on 9/12/18.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define DIGITS 10

int main(void) {
    bool digits[DIGITS] = {false};
    bool repeats[DIGITS] = {false};
    printf("Enter a number: ");
    long int input = 0;
    scanf("%ld", &input);

    int digit = -1;
    do {
        digit = input % 10;
        if (digits[digit]) {
            repeats[digit] = true;
        }
        digits[digit] = true;
        input /= 10;
    } while (input > 0);

    printf("Repeated digits(s): ");
    for (int i = 0; i < DIGITS; i++) {
        if (repeats[i]) {
            printf("%2d", i);
        }
    }
}
