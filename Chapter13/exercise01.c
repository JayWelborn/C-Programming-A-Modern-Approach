//
// Created by jwelborn on 10/4/18.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 20

int main(void) {
    char smallest[MAX_LENGTH + 1] = {127, 127, 127, 127}, largest[MAX_LENGTH + 1] = {0}, current[MAX_LENGTH + 1] = {0};

    while (strlen(current) != 4) {
        printf("Enter word: ");
        scanf("%s", current);
        if (strcmp(current, smallest) < 0) {
            strcpy(smallest, current);
        }
        if (strcmp(current, largest) > 0) {
            strcpy(largest, current);
        }
    }

    printf("Smallest word: %s\n", smallest);
    printf("Largest word: %s\n", largest);

    exit(EXIT_SUCCESS);
}
