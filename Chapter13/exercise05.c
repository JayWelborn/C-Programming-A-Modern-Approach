//
// Created by jwelborn on 10/4/18.
//
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]) {
    int sum = 0;
    for (int i = 0; i < argc; i++) {
        sum += atoi(argv[i]);
    }
    printf("%d\n", sum);
    exit(EXIT_SUCCESS);
}
