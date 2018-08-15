//
// Created by jwelborn on 8/15/18.
//
#include <stdio.h>

/**
 * Program to accept as input an item number, price, and purchase date.
 * Program will print to the console a well formatted table showing this data.
 */
int main(void) {
    int itemno;
    double price;
    char purchase_date[10];

    printf("Enter item number: ");
    scanf("%d", &itemno);

    printf("Enter unit price: ");
    scanf("%lf", &price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%s", purchase_date);

    printf("%-4s\t%-8s\t%s\n", "Item", "Unit", "Purchase");
    printf("%-4s\t%-8s\t%s\n", "", "Price", "Date");
    printf("%-4d\t$%7.2f\t%s\n", itemno, price, purchase_date);

    return 0;
};