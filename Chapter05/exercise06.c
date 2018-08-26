//
// Created by jwelborn on 8/26/18.
//
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve;
    printf("Enter the first a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
          &one, &two, &three, &four, &five, &six, &seven, &eight, &nine, &ten, &eleven, &twelve);
    int first_sum = one + three + five + seven + nine + eleven;
    int second_sum = two + four + six + eight + ten;
    int total = 3 * first_sum + second_sum;
    int check = 9 - ((total - 1) % 10);

    if (check == twelve) {
        printf("VALID\n");
    } else {
        printf("INVALID\n");
    }

    return EXIT_SUCCESS;
}
