//
// Created by jwelborn on 10/4/18.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int i = argc - 1;
    while (i) {
        printf("%s ", argv[i--]);
    }
    printf("\n");

    return EXIT_SUCCESS;
}
