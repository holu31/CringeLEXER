#define HECK_C
char *FILENAME;

// ========== SYSTEM LIBRARIES ======= //

#include <stdio.h>
#include <string.h>

// =================================== //



// ========= INTERNAL LIBRARIES ====== //

#include "../include/main.h"

// =================================== //


// ========== START OF CODE ========== //

int main
(
    int argc,       //   NUMBER OF ARGUMENTS
    char **argv     //   PROGRAM ARGUMENTS
)
{
    ARGS_NO_FILE
    (    argc   )
    {
        printf(
            "LOG : %s\n",
            ERROR_FILE_NOT_ENTER
        );
        FILENAME  =   STD_FILENAME;
    } OTHERWISE
    {
        FILENAME  =   argv[1];        // GET FILE NAME FROM CONSOLE
    }
    FILE *FILE          =       fopen( FILENAME , "r" );    // READ FILE
    char            BUFFER[BUFFER_SIZE]                           ;     // BUFFER FOR LEX
    enum TOKEN_TYPE TOKENS[TOKENS_SIZE]                           ;     // BUFFER FOR TOKENS

    printf(
        "LOG : %s\n",
        LOAD_LEXER
    );
    while ( FILE_END(FILE) )
    {
        char CHAR    =   fgetc (  FILE  );
        _ERROR_CHAR(
            CHAR        // ADDITIONAL VERIFICATION
        ) { break; }
        IGNORE_CHAR(CHAR, '\n') IGNORE_CHAR(CHAR, ' ') {
            IS_DIGIT(CHAR)
            {
                FOR_CHAR
                (
                    _IS_DIGIT( CHAR )
                )
                {
                    IS_DIGIT(
                        CHAR
                    ){ CHAR_ADD_STR( BUFFER , CHAR ); }
                }
                printf(
                    "LOG : INTEGER = %s\n",
                    BUFFER
                );
                memset(BUFFER, 0, BUFFER_SIZE); // CLEAR BUFFER
            }
            SPECIAL_CHAR(CHAR, ':') SPECIAL_CHAR(CHAR, ',') SPECIAL_CHAR(CHAR, '{') SPECIAL_CHAR(CHAR, '}')
        } 
    }
    
}

// ===================================== //