///*Program      : 
//  Programmer   : Lal Thomas
//  Email        : lal.thomas.mail@gmail.com
//  Web          : http://lalamboori.blogspot.com/
//  Compiled on  : MigW
//  Tested  on   : Windows XP */
#include<stdio.h>
#include<conio.h>
void main()
{
int sumeven=0,sumodd=0,i=1,j=2;
clrscr();
for(i=1,j=2;i<100;i+=2,j+=2)
{
sumeven+=j;
sumodd+=i ;
}
printf("sum of even numbers less than 100 is %d ",sumeven-100);
printf("\nSum of Odd numbers less than 100 is %d",sumodd);
getch();
}

