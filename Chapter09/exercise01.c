//
// Created by jwelborn on 9/15/18.
//
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX_LENGTH 1024

void selectionSort(int size, int arr[]);

int main(void) {
    int arr[MAX_LENGTH] = {0};
    int index = 0;
    printf("Enter some integers: ");
    while (scanf("%d", &arr[index]) == 1) {
        index++;
        if (getchar() == '\n') {
            break;
        }
    }

    selectionSort(index, arr);

    printf("Sorted Ints: ");
    for (int i = 0; i < index; i++) {
        printf(" %d", arr[i]);
    }
    printf("\n");
    exit(EXIT_SUCCESS);
}

void selectionSort(int size, int arr[]) {
    if (size <= 1) {
        return;
    }
    int max = INT_MIN;
    int maxIndex = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
            maxIndex = i;
        }
    }
    arr[maxIndex] = arr[size - 1];
    arr[size - 1] = max;
    selectionSort(size - 1, arr);
}
