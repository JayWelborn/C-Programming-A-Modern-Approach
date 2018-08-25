//
// Created by jwelborn on 8/25/18.
//
#include <stdio.h>

int main(void) {
    double income, baseTax = 0.00, rate = .01;

    printf("Enter your taxable income: $");
    scanf("%lf", &income);

    if (income <= 750) {
        // do nothing. The constants above are what we need
    } else if (income <= 2250) {
        baseTax = 7.5;
        rate = .02;
        income -= 750;
    } else if (income <= 3750) {
        baseTax = 37.50;
        rate = .03;
        income -= 2250;
    } else if (income <= 5250) {
        baseTax = 82.50;
        rate = .04;
        income -= 3750;
    } else if (income <= 7000) {
        baseTax = 142.50;
        rate = .05;
        income -= 5250;
    } else {
        baseTax = 230.00;
        rate = .06;
        income -= 7000;
    }
    double taxDue = income * rate + baseTax;

    printf("Total income taxe owed: $%.2f", taxDue);
}
