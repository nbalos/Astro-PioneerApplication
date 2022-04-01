#include <stdio.h>
#include <stdlib.h>
#include "Head.h"

int main ()
{
    char fn[100];
    int answer1 = 0;
    int Countdown, i;

    //Prompt from stdin for a users name
    printf(PROMPT_MSG);
    scanf_s("%s", fn, 100);

    //Print the users name using stdout
    printf("\nHello %s!", fn);
    printf("\nAre you ready to start?(1 for yes, 2 for no)");
    scanf_s("%d", &answer1);

    if (answer1 == 1)
    {
        printf("Great! Let's get started!");
    }  
       else
    {
        printf("Hahaha! Don't be silly, of course you're ready!");
    }

    printf("\nLet's get ready for blastoff! How long of a countdown would you like?\n");
    scanf_s("%i", &Countdown);
    
    for (i = 1; Countdown >= i; --Countdown)
    {
        printf("\nBlastoff in %i...", Countdown);
    }

    printf("\n\nBLASTOFF!");
     
    return(0);
}