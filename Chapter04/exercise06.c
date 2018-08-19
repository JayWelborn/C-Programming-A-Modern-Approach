//
// Created by jwelborn on 8/19/18.
//
#include <stdio.h>

/**
 * Program to compute the check digit from the first twelve digits of a European EAN.
 */
int main(void) {
    int one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve;
    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
          &one, &two, &three, &four, &five, &six, &seven, &eight, &nine, &ten, &eleven, &twelve);
    int first_sum = two + four + six + eight + ten + twelve;
    int second_sum = one + three + five + seven + nine + eleven;
    int total = 3 * first_sum + second_sum;
    int check = 9 - ((total - 1) % 10);

    printf("Check digit: %d", check);
    return 0;
}
