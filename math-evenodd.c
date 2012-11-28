///*Program      : Even or Odd
//  Programmer   : Lal Thomas
//  Email        : lal.thomas.mail@gmail.com
//  Web          : http://lalamboori.blogspot.com/
//  Compiled on  : MigW
//  Tested  on   : Windows XP */
#include<stdio.h>
#include<stdlib.h>
int main()
    {
    char Pause;
    int a;
    printf("Lal thomas\n");
    printf("Enter a number");
    scanf("%d",&a);
    if(a%2==0)
        printf("Number is even");
    else
        printf("Number is odd");

    //
    // Prepares Program to wait
    // accepting a keystroke
    //
    fflush(stdin);
    Pause=getchar();
    return 0;
    }
