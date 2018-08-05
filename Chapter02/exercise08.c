#include <stdio.h>

float calc_balance(float init, float rate, float payment);

int main(void) {
    float init;
    float rate;
    float monthly;

    printf("Enter amount of loan: ");
    scanf("%f", &init);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly);
    float monthly_rate = (rate / 100) / 12;

    float first = calc_balance(init, monthly_rate, monthly);
    printf("Balance remaining after first payment: %.2f\n", first);

    float second = calc_balance(first, monthly_rate, monthly);
    printf("Balance remaining after second payment: %.2f\n", second);

    float third = calc_balance(second, monthly_rate, monthly);
    printf("Balance remaining after third payment: %.2f\n", third);

    return 0;
}

float calc_balance(float init, float rate, float payment) {
    init += init * rate;
    init -= payment;
    return init;
}