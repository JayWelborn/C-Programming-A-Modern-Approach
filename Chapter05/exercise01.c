//
// Created by jwelborn on 8/21/18.
//
#include <stdio.h>
#include <stdlib.h>

/**
 * Program to show how many digits are in a number. Uses sequential ifs to put to use the concepts described
 * in Chapter 5 of the text.
 */
 int main(void) {
     printf("Enter a number: ");
     int input;
     scanf("%d", &input);
     int formatted_input = abs(input);
     int digits;
     if (formatted_input < 10) {
         digits = 1;
     } else if (formatted_input < 100) {
         digits = 2;
     } else if (formatted_input < 1000) {
         digits = 3;
     } else {
         digits = 4;
     }
     printf("The number %d has %d digits", input, digits);
     return 0;
 }