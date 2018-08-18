//
// Created by jwelborn on 8/18/18.
//
#include <stdio.h>

/**
 * Program to accept as input the numbers 1-16 in any order, then print them
 * in a neatly formatted square. After printing the square, we will also print
 * the sums of the rows, columns, and diagonals.
 */
int main(void) {
    // Get input
    int one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen;
    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
          &one, &two, &three, &four, &five, &six, &seven, &eight,
          &nine, &ten, &eleven, &twelve, &thirteen, &fourteen, &fifteen, &sixteen);

    // Print square
    printf("\n%3d%3d%3d%3d\n%3d%3d%3d%3d\n%3d%3d%3d%3d\n%3d%3d%3d%3d\n\n",
           one, two, three, four, five, six, seven, eight, nine, ten,
           eleven, twelve, thirteen, fourteen, fifteen, sixteen);

    // Print row sums
    int row1 = one + two + three + four;
    int row2 = five + six + seven + eight;
    int row3 = nine + ten + eleven + twelve;
    int row4 = thirteen + fourteen + fifteen + sixteen;
    printf("Row sums: %d %d %d %d\n", row1, row2, row3, row4);

    // Print column sums
    printf("Column sums: %d %d %d %d\n",
           one + five + nine + thirteen,
           two + six + ten + fourteen,
           three + seven + eleven + fifteen,
           four + eight + twelve + sixteen);

    // Print diagonal sums
    printf("Diagonal sums: %d %d\n",
            one + six + eleven + sixteen,
            four + seven + ten + thirteen);


    return 0;
};