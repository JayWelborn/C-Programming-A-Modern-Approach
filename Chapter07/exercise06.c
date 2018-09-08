//
// Created by jwelborn on 9/8/18.
//
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = sizeof(int);
    int s = sizeof(short);
    int l = sizeof(long);
    int ll = sizeof(long long);
    int f = sizeof(float);
    int d = sizeof(double);
    int ld = sizeof(long double);
    printf("Int: %d\nShort: %d\nLong: %d\nLong Long: %d\nFloat: %d\nDouble: %d\nLong Double: %d\n", i, s, l, ll, f, d,
           ld);
    return EXIT_SUCCESS;
}