///*Program      : 
//  Programmer   : Lal Thomas
//  Email        : lal.thomas.mail@gmail.com
//  Web          : http://lalamboori.blogspot.com/
//  Compiled on  : MigW
//  Tested  on   : Windows XP */
#include<stdio.h>
#include<conio.h>
int  main(){
	int n,a=0,t,s=0;
	clrscr();
	printf("Enter a no:");
	scanf("%d",&n);
	t=n;
	while(n>0)
	{
	s=n%10;
	a=a*10+s;
	n=n/10;
	}
	if(a==t)
	printf("The no: is pallindrome");
	else
	printf("The no: is not pallindrome");
	getch();
	return 1;
}
