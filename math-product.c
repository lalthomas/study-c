/*Program on C++
Programmer : Lal Thomas
Compiled on Turbo C++
Tested on Windows*/


#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int  main()
{
	float  num=0,pro=1;
        int count=2;
	char ch;
	clrscr();
	do
	{
                pro=1;
		textcolor(count);
		printf("Enter numbers for multiplying (1 to stop) \n" );
		              do
		              {
                              scanf("%f",&num);
		              pro=pro*num;
		              count++;
		              }while(num!=1);

		textcolor(count+BLINK);
		cprintf("Product= %f",pro);
		fflush(stdin);
		printf("\nContiue or not('y'/'n')");
		scanf("%c",&ch);
	}while(ch=='Y'||ch=='y');
	return 1;
}
