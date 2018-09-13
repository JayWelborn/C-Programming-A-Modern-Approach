//
// Created by jwelborn on 9/13/18.
//
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_LENGTH 256

char biffify(char c);

int main(void) {
    printf("Enter Message: ");
    char biff[MAX_LENGTH] = {'\0'};
    int i = 0;
    char c = (char) getchar();
    do {
        biff[i] = c;
        i++;
        c = (char) getchar();

    } while (c != '\n');

    printf("In BIFF-speak: ");
    for (int j = 0; j < i; j++) {
        putchar(biffify(biff[j]));
    }

    for (int j = 0; j < 8; j++) {
        putchar('!');
    }
    printf("\n");

    return EXIT_SUCCESS;
}

char biffify(char c) {
    c = (char) toupper(c);
    switch (c) {
        case 'A':
            return '4';
        case 'B':
            return '8';
        case 'E':
            return '3';
        case 'I':
            return '1';
        case 'O':
            return '0';
        case 'S':
            return '5';
        default:
            return c;
    }
}
