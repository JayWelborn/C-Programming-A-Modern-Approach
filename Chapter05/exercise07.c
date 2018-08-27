//
// Created by jwelborn on 8/26/18.
//
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int two, three, four, min, max;
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &min, &two, &three, &four);
    max = min;

    if (min > two) {
        min = two;
    } else {
        max = two;
    }

    if (min > three) {
        min = three;
    }
    if (max < three) {
        max = three;
    }

    printf("Largest: %d\nSmallest: %d\n",
           max > four ? max : four,
           min < four ? min : four);
    return EXIT_SUCCESS;
}
