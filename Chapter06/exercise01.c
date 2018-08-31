//
// Created by jwelborn on 8/31/18.
//

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    long double max = 0, input = 0;
    do {
        printf("Enter a number: ");
        scanf("%Lf", &input);
        if (input > max) {
            max = input;
        }
    } while (input > 0);

    printf("The largest number entered was %.2Lf", max);
    return EXIT_SUCCESS;
}
