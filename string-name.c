/*Program on C++
  Programmer : Lal Thomas
  Compiled on Turbo C++
  Tested on Windows*/

#include<stdio.h>
#include<conio.h>
int main()
    {
    int i,j,n;
    char a[20][20];
    clrscr();
    printf("Enter the limit\n");
    scanf("%d",&n);
    printf("Enter the string\n");
    for(i=0;i<n;i++)
        {
        scanf("%s",a[i]);
        }
    printf("\nString\n");
    for(i=0;i<n;i++)
        printf("%s\n",a[i]);
    getch();
    return 1;
    }
