//
// Created by jwelborn on 8/21/18.
//
#include <stdio.h>

/**
 * Program to convert 24-hour time to 12-hour time
 */
 int main(void) {
     int hours, minutes;
     char suffix[2] = {'A', 'M'};
     printf("Enter a 24-hour time: ");
     scanf("%d:%d", &hours, &minutes);
     if (hours > 12) {
         hours %= 12;
     }
     if (hours >= 12) {
         suffix[0] = 'P';
     }
     if (hours == 0) {
         hours = 12;
     }
     printf("Equivalent 12-hour time: %02d:%02d %s", hours, minutes, suffix);
     return 0;
 }
