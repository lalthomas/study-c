///*Program      : 
//  Programmer   : Lal Thomas
//  Email        : lal.thomas.mail@gmail.com
//  Web          : http://lalamboori.blogspot.com/
//  Compiled on  : MigW
//  Tested  on   : Windows XP */
#include<stdio.h>
#include<conio.h>
int main()
	{
	int n,i;
	float sum=0,num,avg;
	clrscr();
	printf("Enter how many numbers you want to add up ");
	scanf("%d",&n);
		for(i=0;i<n;i++)
		{
		printf("Enter the %d'nd number :",i+1);
		scanf("%f",&num);
		sum+=num;
		}
	avg=sum/n;
	printf("Sum of the numbers  you entered : %f",sum);
	printf("\nAverage of numbers: %f" ,avg);
	getch();
	return 1;
	}



