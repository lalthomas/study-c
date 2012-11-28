///*Program      : 
//  Programmer   : Lal Thomas
//  Email        : lal.thomas.mail@gmail.com
//  Web          : http://lalamboori.blogspot.com/
//  Compiled on  : MigW
//  Tested  on   : Windows XP */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>

	void head();
	int  main()
	{
	int num,tem,image=0;
	clrscr();
	head();
	printf("Enter a number : ");
	scanf("%d",&num);
	tem=num;
		while(tem!=0)
		{
		image*=10;
		image+=(tem%10);
		tem/=10;
		}
	if(num-image==0)
	printf("%d is a palindrome number",num);
	else
	printf("%d is not a palindrome number",num);
	getch();
	return 1;
	}


void head(){
		static int gdriver = DETECT, gmode, errorcode;
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



