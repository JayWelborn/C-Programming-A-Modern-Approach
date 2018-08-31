//
// Created by jwelborn on 8/31/18.
//

#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b);

int main(void)
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Greatest common divisor: %d\n", gcd(a, b));
}

int gcd(a, b)
{
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
