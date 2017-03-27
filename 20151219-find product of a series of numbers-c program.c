//	Program      : find product of a series of number
//  Programmer   : Lal Thomas
//  Email        : lal.thomas.mail@gmail.com
//  Web          : http://lalamboori.blogspot.com/
//  Compiled on  : Turbo C++, MigW
//  Tested  on   : Windows XP

#include<stdio.h>
#include<ctype.h>
int  main()
{
  float num=0,pro=1;
  int count=2;
  char ch;
  do
    {
      pro=1;
      printf("Enter numbers for multiplying (1 to stop) \n" );
      do
        {
          scanf("%f",&num);
          pro=pro*num;
          count++;
        } while(num!=1);
      printf("Product= %f",pro);
      fflush(stdin);
      printf("\nContinue or not('y'/'n')");
      scanf("%c",&ch);
    }
  while(ch=='Y'||ch=='y');
  return 1;
}
