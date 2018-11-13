//
// Created by fof_z on 10/27/2018.
//

#ifndef TOKEN_H
#define TOKEN_H

typedef enum
{
    beginTk, endTk, iterTk, voidTk, varTk, returnTk, readTk, printTk,
    programTk, condTk, thenTk, letTk, equalTk, greaterTk, lessTk, colonTk,
    plusTk, minusTk, starTk, slashTk, percentTk, dotTk, openparenTk,
    closeparenTk, commaTk, openbraceTk, closebraceTk, semicolonTk,
    openbracketTk, closebracketTk, identifierTk, integerTk, eofTk
} tokens;


extern const char * tokenArr[33] = {"begin", "end", "iter", "void", "var", "return", "read", "print",
                              "program", "cond", "then", "let", "=", ">", "<", ":", "+", "-", "*",
                              "/", "%", ".", "(", ")", ",", "{", "}", ";", "[", "]", "identifier", "integer", "EOF"};

typedef struct token_t
{
    tokens tokenID;
    char tokenInstance[8];
    int line;
} token;

#endif //TOKEN_H
