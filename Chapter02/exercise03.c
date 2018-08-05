//
// Created by jwelborn on 8/5/18.
//
#include <stdio.h>
#include <math.h>

/**
 * Exercise 4 asks the student to prompt the user for a radius, compute the volume of a sphere of that radius,
 * and print it to the command line.
 *
 * @return 0
 */
int main(void) {
    double r;
    printf("Radius of Sphere: ");
    scanf("%lf", &r);
    double volume = (4.0f/3.0f) * M_PI * r * r * r;
    printf("%f\n", volume);
    /* code */
    return 0;
}
