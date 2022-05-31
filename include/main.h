#pragma once

#ifndef HECK_H
#define HECK_H

#define VERSION_MAJOR   0
#define VERSION_MINOR   1  
#define VERSION_PATCH   0

#define EXIT_FALURE 0
#define STD_FILENAME "main.hl"   // STANDARD RUN FILE
#define BUFFER_SIZE 9*100000     // ALLOCATED BUFFER MEMORY
#define TOKENS_SIZE 9*100000     // ALLOCATED TOKENS MEMORY

#define ARGS_NO_FILE(i) if(i < 2)
#define ERROR_FILE_NOT_ENTER "FILE IS NOT ENTER"
#define LOAD_LEXER "LOAD LEXER"
#define FILE_END(__file) feof(__file) != 1
#define _ERROR_CHAR(c) if((int)c == -1)
#define CHAR_ADD_STR(str, char) str[strlen(str)] = char;
#define OTHERWISE else
#define IGNORE_CHAR(CHAR, CHARS) if(CHAR != CHARS)
#define IS_DIGIT(CHAR)  if(CHAR == '0' || CHAR == '1' || CHAR == '2' || CHAR == '3' || CHAR == '4' || CHAR == '5' || CHAR == '6' || CHAR == '7' || CHAR == '8' || CHAR == '9')
#define _IS_DIGIT(CHAR)  CHAR == '0' || CHAR == '1' || CHAR == '2' || CHAR == '3' || CHAR == '4' || CHAR == '5' || CHAR == '6' || CHAR == '7' || CHAR == '8' || CHAR == '9'
#define FOR_CHAR(USLOVIE) for (int i=0; USLOVIE; CHAR = fgetc (  FILE  ))
#define IF(arguments) if(arguments) // cringe xD
#define SPECIAL_CHAR(CHAR, SYM) IF(CHAR == SYM) {printf("LOG : SPECIAL SYMBOL = %C\n",CHAR);}
#define FALSE (0 == 1)
#define TRUE  (1 == 1)

enum TOKEN_TYPE {
    TOKEN_NUM,
    TOKEN_STR,
};

#endif