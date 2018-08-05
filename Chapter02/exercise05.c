#include <stdio.h>

int pow(int x, int exp);

int main(void) {
    printf("Enter a value for x: ");
    int x;
    scanf("%d", &x);

    printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 = ");
    x = (3 * pow(x, 5)) + 2 * pow(x, 4) - 5 * pow(x, 3) - pow(x, 2) + 7 * x - 6;
    printf("%d\n", x);
    return 0;
}

int pow(int x, int exp) {
    int ret = 1;
    for (int i = 0; i < exp; i++) {
        ret = ret * x;
    }
    return ret;
}