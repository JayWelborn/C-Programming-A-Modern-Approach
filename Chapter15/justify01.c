//
// Created by jwelborn on 10/15/18.
//
#include <string.h>
#include "line01.h"
#include "word01.h"

#define MAX_WORD_LEN 20

int main(void) {
    char word[MAX_WORD_LEN+2];
    unsigned long word_len;
    int lno = 1;

    clear_line();
    for(;;) {
        read_word(word, MAX_WORD_LEN + 1);
        word_len = strlen(word);
        if (word_len == 0) {
            flush_line();
            return 0;
        }
        if (word_len > MAX_WORD_LEN) {
            word[MAX_WORD_LEN] = '*';
        }
        if (word_len + 1 > space_remaining()) {
            write_line(lno++);
            clear_line();
        }
        add_word(word);
    }
}