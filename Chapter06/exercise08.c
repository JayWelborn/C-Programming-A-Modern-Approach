//
// Created by jwelborn on 9/1/18.
//
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int days, start;
    printf("Enter number of days in the month: ");
    scanf("%d", &days);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start);

    for (int i = 1; i < start; i++) {
        printf("   ");
    }

    for (int i = 1; i <= days; i++) {
        printf("%3d", i);
        int currentDay = (i + start - 1) % 7;
        if (currentDay == 0) {
            printf("\n");
        }
    }
}
