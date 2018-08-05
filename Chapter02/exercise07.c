#include <stdio.h>

int main(void) {
    printf("Enter a dollar amount: ");
    int amt;
    scanf("%d", &amt);

    int twenties = amt / 20;
    amt %= 20;
    int tens = amt / 10;
    amt %= 10;
    int fives = amt / 5;
    amt %= 5;
    int ones = amt;

    printf("$20 bills: %d\n$10 bills: %d\n $5 bills: %d\n $1 bills: %d\n", twenties, tens, fives, ones);
    return 0;
}