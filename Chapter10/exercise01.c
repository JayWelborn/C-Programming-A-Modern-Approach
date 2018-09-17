//
// Created by jwelborn on 9/17/18.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 100

char contents[STACK_SIZE];
int top = 0;

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(char c)
{
    if (is_full()) {
        printf("Stack is full.\n");
    } else {
        contents[top++] = c;
    }
}

char pop(void)
{
    if (is_empty()) {
        printf("Stack is empty.");
        return '\0';
    } else {
        return contents[--top];
    }
}

int main(void)
{
    bool proper = true;
    printf("Enter parentheses and/or braces; ");
    char in = ' ';
    while (in != '\n') {
        scanf("%c", &in);
        if (in == '(' || in == '[') {
            push(in);
            continue;
        } else if (in == ']') {
            char out = pop();
            if (out != '[') {
                proper = false;
                break;
            }
            continue;
        } else if (in == ')') {
            char out = pop();
            if (out != '(') {
                proper = false;
                break;
            }
        } else if (in != '\n') {
            printf("Invalid character entered.\n");
            exit(EXIT_FAILURE);
        }
    }
    if (proper) {
        printf("Parentheses/braces are nested properly\n");
    } else {
        printf("Parentheses/braces are not nested properly\n");
    }
    return EXIT_SUCCESS;
}
