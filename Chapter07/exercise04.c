//
// Created by jwelborn on 9/3/18.
//
#include <stdio.h>
#include <stdlib.h>

char phoneLetter(int c);

int main(void)
{
    int inChar = ' ';
    printf("Enter phone number: ");
    char outDigit;
    while (inChar != '\n') {
        inChar = getchar();
        outDigit = phoneLetter(inChar);
        putchar(outDigit);
    }
    return EXIT_SUCCESS;
}

char phoneLetter(int c)
{
    switch (c) {
        case 'A':
        case 'B':
        case 'C':
            return '2';
        case 'D':
        case 'E':
        case 'F':
            return '3';
        case 'G':
        case 'H':
        case 'I':
            return '4';
        case 'J':
        case 'K':
        case 'L':
            return '5';
        case 'M':
        case 'N':
        case 'O':
            return '6';
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
            return '7';
        case 'T':
        case 'U':
        case 'V':
            return '8';
        case 'X':
        case 'Y':
        case 'Z':
            return '9';
        default:
            return (char) c;
    }
}
