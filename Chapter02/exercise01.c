#include <stdio.h>

/**
 * Exercise 1 asks the student to print a check mark symbol using asterisks on the command line.
 *
 * @return 0
 */
int main(void) {
    printf("%8s\n", "*");
    printf("%7s\n", "*");
    printf("%6s\n", "*");
    printf("*%4s\n", "*");
    printf("%2s%2s\n", "*", "*");
    printf("%3s\n", "*");
    return 0;
}
