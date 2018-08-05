#include <stdio.h>

/**
 * Exercise 5 asks the student to prompt the user for an integer, then print the result of a polynomial equation
 * to STDOUT using Horner's rule.
 *
 * @return 0
 */
int main(void) {
    printf("Enter a value for x: ");
    int x;
    scanf("%d", &x);

    printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 = ");
    x = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
    printf("%d\n", x);
    return 0;
}