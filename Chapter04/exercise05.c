//
// Created by jwelborn on 8/19/18.
//
#include <stdio.h>

/**
 * Program to compute the check digit from the first eleven digits of a upc.
 */
int main(void) {
    int one, two, three, four, five, six, seven, eight, nine, ten, eleven;
    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
          &one, &two, &three, &four, &five, &six, &seven, &eight, &nine, &ten, &eleven);
    int first_sum = one + three + five + seven + nine + eleven;
    int second_sum = two + four + six + eight + ten;
    int total = 3 * first_sum + second_sum;
    int check = 9 - ((total - 1) % 10);

    printf("Check digit: %d", check);
    return 0;
}
