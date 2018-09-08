//
// Created by jwelborn on 9/8/18.
//
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int isVowel(char c) {
    switch(c) {
        case 'A': case 'E': case 'I': case 'O': case 'U':
            return 1;
        default:
            return 0;
    }
}

int main(void) {
    printf("Enter a sentence: ");
    char c = (char) toupper(getchar());
    int vowels = 0;
    do {
        vowels += isVowel(c);
        c = (char) toupper(getchar());
    } while (c != '\n');
    printf("Your sentence contains %d vowels", vowels);
    return EXIT_SUCCESS;
}
