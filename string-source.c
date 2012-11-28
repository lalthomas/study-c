/*
Program      :Lexical Analyzer-1
Author       :Lal Thomas
Support      :lal.thomas.mail@gmail.com
Compiled on  :GNU C
Tested  on   :Windows XP
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define STR_LEN 15
/*End of the array should be " "*/
char *Words[]=
    {
        "New","Indian","have","to","Be","Good",/*Mandatory to include " "*/" "
    };

int StringFound(char SearchKey[],char *Source[])
    {
    int i;
    for(i=0;!(strcmp(Source[i]," "));i++)
        if(strcmp(SearchKey,Source[i])==0)
            return 1;
        else
            return 0;

    }
int main()
    {
    int Pause;
    if(StringFound("New",Words))
        printf("Found");
    else
        printf("Error");
    printf("\nPress any key to continue");
    fflush(stdin);
    Pause=getchar();
    return 0;
    }

