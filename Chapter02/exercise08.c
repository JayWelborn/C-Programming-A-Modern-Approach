#include <stdio.h>

/** Utility function for finding the monthly balance of a loan with a given interest rate */
float calc_balance(float init, float rate, float payment);

/**
 * Exercise 8 asks the student to calculate the monthly remaining balance for three months on a loan with the
 * user providing the initial loan amount, annual interest rate, and monthly payment.
 *
 * @return 0
 */
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

/**
 * Calculate remaining balance given initial balance, interest rate, and monthly payment
 *
 * @param init balance at start of month
 * @param rate interest rate converted to percentage
 * @param payment monthly payment amount
 * @return remaining balance at the end of the month
 */
float calc_balance(float init, float rate, float payment) {
    init += init * rate;
    init -= payment;
    return init;
}