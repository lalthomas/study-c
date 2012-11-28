///*Program      : 
//  Programmer   : Lal Thomas
//  Email        : lal.thomas.mail@gmail.com
//  Web          : http://lalamboori.blogspot.com/
//  Compiled on  : MigW
//  Tested  on   : Windows XP */
#include<stdio.h>
#include<conio.h>
int reverse();
int  main()
{
 int num,rev=0,mem;
clrscr();
textcolor(5);
cprintf("Enter a Positive  Number : ");
scanf("%d",&num);
	while(num>0)
	{
	mem=num%10;
	rev=(rev*10)+mem;
	num/=10;
	}
textcolor(6);
cprintf("Reverse is " );
printf("%d",rev);
getch();
return 1;
}


