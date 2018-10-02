//
// Created by jwelborn on 10/2/18.
//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

#define MAX_LENGTH 1024

bool isPalindrome( char *in );

int main( void )
{
    printf( "Enter a message: " );
    char *input = malloc( sizeof( char ) * MAX_LENGTH );
    int len = 0;
    while (( *( input + len ) = ( char ) toupper( getchar())) != '\n' ) {
        if ( isalpha( *( input + len ))) {
            len++;
        }
    }
    *( input + len ) = '\0';

    char *output;

    if ( isPalindrome( input )) {
        output = "Palindrome";
    } else {
        output = "Not a palindrome";
    }

    printf( "%s", output );
    free( input );

    exit( EXIT_SUCCESS );
}

bool isPalindrome( char *in )
{
    size_t len = strlen( in );
    char *first = in, *last = in + len - 1;
    while ( first < last ) {
        if ( *first++ != *last-- ) {
            return false;
        }
    }
    return true;
}