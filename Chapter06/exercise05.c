//
// Created by jwelborn on 9/1/18.
//
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("Enter an integer: ");
    int input;
    scanf("%d", &input);
    int reversed = 0;
    do {
        reversed = reversed * 10 + input % 10;
        input /= 10;
    } while (input > 0);
    printf("Reversed number: %d", reversed);

    return EXIT_SUCCESS;
}
