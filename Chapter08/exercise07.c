//
// Created by jwelborn on 9/13/18.
//
#include <stdio.h>
#include <stdlib.h>

#define GRID_SIZE 5

int main(void) {
    int input = 0;
    int rowSums[GRID_SIZE] = {0};
    int columnSums[GRID_SIZE] = {0};

    for (int i = 0; i < GRID_SIZE; i++) {
        printf("Enter row %d: ", i + 1);
        for (int j = 0; j < GRID_SIZE; j++) {
            scanf("%d", &input);
            columnSums[j] += input;
            rowSums[i] += input;
        }
    }

    printf("Row totals:");
    for (int i = 0; i < GRID_SIZE; i++) {
        printf(" %d", rowSums[i]);
    }
    printf("\n");

    printf("Column totals:");
    for (int i = 0; i < GRID_SIZE; i++) {
        printf(" %d", columnSums[i]);
    }
    printf("\n");

    return EXIT_SUCCESS;
}
