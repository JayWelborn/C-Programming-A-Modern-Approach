//
// Created by jwelborn on 8/15/18.
//
#include <stdio.h>

/**
 * Program to accept as input an ISBN, and display it broken down into its component parts.
 */
int main(void) {
    int gs1, group, publisher, item_number, check;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1, &group, &publisher, &item_number, &check);
    printf("GS1 prefix: %d\n", gs1);
    printf("Group identifier: %01d\n", group);
    printf("Publisher code: %d\n", publisher);
    printf("Item number: %d\n", item_number);
    printf("Check digit: %d\n", check);
    return 0;
};