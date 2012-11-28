///*Program      :
//  Programmer   : Lal Thomas
//  Email        : lal.thomas.mail@gmail.com
//  Web          : http://lalamboori.blogspot.com/
//  Compiled on  : MigW
//  Tested  on   : Windows XP */

#include <stdio.h>
#include <conio.h>
#include<graphics.h>
#include <stdlib.h>

void head();
int  main()
    {
    int no,s=0,temp,a;
    head();
    clrscr();
    textcolor(RED);
    cprintf("Enter a number :");
    printf("\n");
    scanf("%d",&no);
    temp=no;

    while(no!=0)
        {
        s*=10;
        a=no%10;
        s+=a;
        no/=10;
        }
    printf("\n%d <----> %d\n",temp,s);
    textcolor(YELLOW);
    if(s==temp)
        {
        cprintf("%d is palindrome",temp);
        }
    else
        {
        cprintf("%d is not palindrome",temp);
        }
    getch();
    return 1;
    }

void head()
    {
    int gdriver = DETECT, gmode, errorcode;
    /* initialize graphics and local
    variables */
    initgraph(&gdriver, &gmode, "c:\\tc\\bgi");

    /* read result of initialization */
    errorcode = graphresult();
    /* an error occurred */
    if (errorcode != grOk)
        {
        printf("Graphics error: %s\n", grapherrormsg(errorcode));
        printf("Press any key to halt:");
        getch();
        exit(1);    /* terminate with an error code */
        }
    settextstyle(4,HORIZ_DIR,4);
    outtextxy(getmaxx()/4,getmaxy()/4,"Palindrome number");
    getch();
    closegraph();
    }



