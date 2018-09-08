//
// Created by jwelborn on 9/8/18.
//
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int scoreLetter(char c) {
    switch(c) {
    case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U':
        return 1;
    case 'D': case 'G':
        return 2;
    case 'B': case 'C': case 'M': case 'P':
        return 3;
    case 'F': case 'H': case 'V': case 'W': case 'Y':
        return 4;
    case 'K':
        return 5;
    case 'J': case 'X':
        return 8;
    case 'Z': case 'Q':
        return 10;
    default:
        exit(EXIT_FAILURE);
    }
}

int main(void) {
    printf("Enter a word: ");
    char c = (char) toupper(getchar());
    int score = 0;
    do {
        score += scoreLetter(c);
        c = (char) toupper(getchar());
    } while (c != '\n');
    printf("Scrabble value: %d", score);
    return EXIT_SUCCESS;
}
