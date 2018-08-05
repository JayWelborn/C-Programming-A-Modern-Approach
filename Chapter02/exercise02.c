#include <stdio.h>
#include <math.h>

/**
 * Exercise s asks the student to print the volume of a sphere of radius 10.
 *
 * @return 0
 */
int main(void)
{
    int r = 10;
    double volume = (4.0f/3.0f) * M_PI * r * r * r;
    printf("%f\n", volume);
    /* code */
    return 0;
}
