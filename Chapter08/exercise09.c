//
// Created by jwelborn on 9/14/18.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define ROWS 10
#define COLS 10
#define ALPHABET_LENGTH 26

bool hasOpenNeighbors(char arr[ROWS][COLS], int x, int y);

int main(void) {
    char arr[ROWS][COLS] = {
            {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
            {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
            {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
            {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
            {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
            {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
            {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
            {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
            {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
            {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}
    };

    int y = 0, x = 0, steps = 0, direction;
    char current = 'B';
    arr[0][0] = 'A';
    srand((unsigned int)time(NULL));
    while (steps < ALPHABET_LENGTH - 1) {
        if (!hasOpenNeighbors(arr, x, y)) {
            break;
        }
        direction = rand() % 4;
        if (direction == 0 && x > 0) {
            x--;
            if (arr[y][x] == '.') {
                arr[y][x] = current;
                current++;
                steps++;
                continue;
            } else {
                x++;
            }
        } else if (direction == 1 && y > 0) {
            y--;
            if (arr[y][x] == '.') {
                arr[y][x] = current;
                current++;
                steps++;
                continue;
            } else {
                y++;
            }
        } else if (direction == 2 && x < COLS - 1) {
            x++;
            if (arr[y][x] == '.') {
                arr[y][x] = current;
                current++;
                steps++;
                continue;
            } else {
                x--;
            }
        } else if (direction == 3 && y < ROWS - 1) {
            y++;
            if (arr[y][x] == '.') {
                arr[y][x] = current;
                current++;
                steps++;
                continue;
            } else {
                y--;
            }
        } else {
            continue;
        }
    }

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%2c", arr[i][j]);
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}

bool hasOpenNeighbors(char arr[ROWS][COLS], int x, int y) {
    if (x == 0 && y == 0) {
        return (arr[y+1][x] == '.' || arr[y][x+1] == '.');
    } else if (x == 0) {
        return (arr[y+1][x] == '.' || arr[y-1][x] == '.' || arr[y][x+1] == '.');
    } else if (y == 0) {
        return (arr[y+1][x] == '.' || arr[y][x-1] == '.' || arr[y][x+1] == '.');
    } else if (y == ROWS - 1 && x == COLS - 1) {
        return (arr[y-1][x] == '.' || arr[y][x-1] == '.');
    } else if (y == ROWS - 1) {
        return (arr[y][x-1] == '.' || arr[y][x+1] == '.' || arr[y - 1][x] == '.');
    } else if (x == COLS - 1) {
        return (arr[y][x-1] == '.' || arr[y + 1][x] == '.' || arr[y - 1][x] == '.');
    } else {
        return (arr[y][x-1] == '.' || arr[y][x+1] == '.' || arr[y - 1][x] == '.' || arr[y + 1][x] == '.');
    }
}
