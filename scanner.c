//
// Created by fof_z on 10/28/2018.
//

#include "token.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

token scan(FILE * fp)
{
    char * tokenArr[33];
    char tok[8];
    token newtoken;
    int i;

    if(fscanf(fp, "%s", tok) == EOF)
    {
        newtoken.tokenID = eofTk;
        strcpy(newtoken.tokenInstance, tokenArr[newtoken.tokenID]);
        return newtoken;
    }

    newtoken.line = 0;
    for (i = 0; i < 33; i++)
    {
        newtoken.tokenID = i;
        if(strcmp(tokenArr[i], tok))
        {
            strcpy(newtoken.tokenInstance, tokenArr[i]);
            return newtoken;
        }
    }
    return newtoken;
}