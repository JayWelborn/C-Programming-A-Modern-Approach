//
// Created by jwelborn on 8/27/18.
//

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("Enter a numerical grade: ");
    int grade;
    scanf("%d", &grade);

    if (grade < 0 || grade > 100) {
        printf("Error: INVALID GRADE\n");
        return EXIT_FAILURE;
    }

    grade /= 10;
    printf("Letter Grade: ");
    switch (grade) {
        case 10:
            printf("A");
            break;
        case 9:
            printf("A");
            break;
        case 8:
            printf("B");
            break;
        case 7:
            printf("C");
            break;
        case 6:
            printf("D");
            break;
        case 5:  case 4: case 3: case 2: case 1: case 0:
            printf("F");
            break;
    }
    printf("\n");

    return EXIT_SUCCESS;
}