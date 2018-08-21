//
// Created by jwelborn on 8/21/18.
//
#include <stdio.h>

/**
 * Program to calculate a software broker's commission.
 */
int main(void) {
    float commission, price, value;
    int shares;

    printf("Enter price of stock (in dollars): ");
    scanf("%f", &price);
    printf("Enter shares to purchase: ");
    scanf("%d", &shares);

    value = price * shares;

    if (value < 2500.00f) {
        commission = 30.00f + .017f * value;
    } else if (value < 6250.00f) {
        commission = 56.00f + .0066f * value;
    } else if (value < 20000.00f) {
        commission = 76.00f + .0034f * value;
    } else if (value < 50000.00f) {
        commission = 100.00f + .0022f * value;
    } else if (value < 500000.00f) {
        commission = 155.00f + .0011f * value;
    } else {
        commission = 255.00f + .0009f * value;
    }

    if (commission < 39.00f) {
        commission = 39.00f;
    }

    printf("Commission: $%.2f\n", commission);

    float rival_commission;
    if (shares < 2000) {
        rival_commission = 33.00f + .03f * shares;
    } else {
        rival_commission = 33.00f + .02f * shares;
    }

    printf("Rival's Commission: $%.2f\n", rival_commission);

    return 0;
}
