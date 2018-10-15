//
// Created by jwelborn on 10/15/18.
//

#ifndef LINE01_H
#define LINE01_H

/**
 * clear_line: Clears the current line.
 */
void clear_line(void);

/**
 * add_word:    Adds word to the end of the current line. If this is not the
 *              first word on the line, puts one space before word.
 */
void add_word(const char *word);

/**
 * space_remaining: Returns the number of characters left in the current line.
 */
int space_remaining(void);

/**
 * write_line: Writes the current line with justification.
 */
void write_line(int lno);

/**
 * flush_line:  Writes the current line without justification. If the line is
 *              empty, does nothing.
 */
void flush_line(void);

#endif //LINE01_H
