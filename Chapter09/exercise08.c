//
// Created by jwelborn on 9/16/18.
//
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int roll_dice(void);
bool play_game(void);

int main(void) {
    srand(0);
    int input;
    do {
        if (play_game()) {
            printf("You win!\n\n");
        } else {
            printf("You lose!\n\n");
        }
        printf("Play again? ");
        input = getchar();
        getchar();
    } while (toupper(input) == 'Y');
    exit(EXIT_SUCCESS);
}

int roll_dice(void) {
    return (rand() % 6 + 1) + (rand() % 6 + 1) ;
}

bool play_game(void) {
    int roll = roll_dice();
    printf("You rolled: %d\n", roll);
    if (roll == 7 || roll == 11) {
        return true;
    } else if (roll == 2 || roll == 3 || roll == 12) {
        return false;
    }
    int point = roll;
    printf("Your point is %d\n", point);
    while (true) {
        roll = roll_dice();
        printf("You rolled: %d\n", roll);
        if (roll == point) {
            return true;
        } else if (roll == 7) {
            return false;
        }
    }
}
