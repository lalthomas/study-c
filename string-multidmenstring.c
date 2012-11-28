/*Program on C
  Programmer : Lal Thomas
  Compiled on Turbo C++
  Tested on Windows*/
#include<stdio.h>
#include<conio.h>
int  main()
    {
    char ch[20][20];
    int i,j,n;
    clrscr();
    printf("Enter how many words");
    scanf("%d",&n);
    printf("Enter words\n");
    for(i=0;i<n;i++)
        scanf("%s",ch[i]);
    printf("Entered words\n");
    for(i=0;i<n;i++)
        printf("%s\n",ch[i]);
    getch();
    return 1;
    }
