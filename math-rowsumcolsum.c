///*Program      : 
//  Programmer   : Lal Thomas
//  Email        : lal.thomas.mail@gmail.com
//  Web          : http://lalamboori.blogspot.com/
//  Compiled on  : MigW
//  Tested  on   : Windows XP */
//program by Lal Thomas
//program to find the row sum and coloumn sum

#include<stdio.h>
#include<conio.h>
int a[10][10],r,c,R[10],C[10];
void initialize();
void get();
void cal();
void disp();
int main()
    {
    clrscr();
    get();
    cal();
    disp();

    getch();
    return 1;
    }
//static int i,j,R,C,a[10][10];
void initialize()
    {
    for(int i=0;i<10;i++)
        R[i]=C[i]=0;
    return;
    }
void  get()
    {
    int i,j;
    printf("Enter the row no.\n");
    scanf("%d",&r);
    printf("Enter the coloum no \n");
    scanf("%d",&c);
    printf("Enter the elements of array ");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    return ;
    }
void cal()
    {
    int i,j;
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            R[i]+=a[i][j];
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            C[i]+=a[j][i];
    return;
    }
void disp()
    {
    printf("\n\nRow sum of matrix\n" );
    for(int i=0;i<r;i++)
        printf("\nSum of %d th row %d ",i+1,R[i]);
    printf("\n\nColumn sum of matrix");
    for(i=0;i<c;i++)
        printf("\nSum of %d th colomn  %d",i+1,C[i]);
    return;
    }
