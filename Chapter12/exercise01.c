//
// Created by jwelborn on 9/30/18.
//
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char *str = malloc(sizeof(char) * 2048);
    int len = 0;
    printf("Enter a message: ");
    while (scanf("%c", str + len) == 1 && *(str + len) != '\n')
        len++;

    printf("Reversal is: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
    return EXIT_SUCCESS;
}
