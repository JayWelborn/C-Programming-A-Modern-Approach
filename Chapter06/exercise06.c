//
// Created by jwelborn on 9/1/18.
//
#include <stdlib.h>
#include <stdio.h>

int main(void) {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    for (int i = 2; i * i <= n; i+=2) {
        printf("%d", i * i);
        if (i * i < n) {
            putchar('\n');
        }
    }
    return EXIT_SUCCESS;
}
