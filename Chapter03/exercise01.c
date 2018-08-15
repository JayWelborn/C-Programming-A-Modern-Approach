//
// Created by jwelborn on 8/15/18.
//
#include <stdio.h>

/**
 * Program to take a date in format MM/DD/YYYY and print it out as yyyymmdd.
 */
int main(void) {
    printf("Enter a date: (mm/dd/yyyy): ");
    int month;
    int day;
    int year;

    scanf("%d/%d/%d", &month, &day, &year);

    printf("You entered the date %04d%02d%02d\n", year, month, day);
    return 0;
};
