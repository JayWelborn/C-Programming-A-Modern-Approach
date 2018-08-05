//
// Created by jwelborn on 8/5/18.
//
#include <stdio.h>
#include <math.h>

int main(void) {
    int r;
    printf("Radius of Sphere: ");
    scanf("%d", &r);
    double volume = (4.0f/3.0f) * M_PI * r * r * r;
    printf("%f\n", volume);
    /* code */
    return 0;
}
