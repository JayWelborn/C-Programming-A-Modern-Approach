//
// Created by jwelborn on 8/21/18.
//
#include <stdio.h>

int main(void) {
    printf("Enter wind speed (in knots): ");
    int speed;
    scanf("%d", &speed);

    if (speed < 1) {
        printf("Calm");
    } else if (speed < 4) {
        printf("Light air");
    } else if (speed < 28) {
        printf("Breeze");
    } else if (speed < 48) {
        printf("Gale");
    } else if (speed < 64) {
        printf("Storm");
    } else {
        printf("Hurricane");
    }

    printf("\n");

    return 0;
}
