//
// Created by fof_z on 10/28/2018.
//

#include "token.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

token scan(FILE * fp)
{
    char tok[8];
    fscanf(fp, "%s", tok);

    token newtoken;
    newtoken.line = 0;
    strcpy(newtoken.tokenInstance, tok);
    return newtoken;
}