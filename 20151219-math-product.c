/*Program on C++
Programmer : Lal Thomas
Compiled on Turbo C++
Tested on Windows*/


#include<stdio.h>
#include<ctype.h>
int  main()
{
  float  num=0,pro=1;
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
        }
      while(num!=1);
      printf("Product= %f",pro);
      fflush(stdin);
      printf("\nContiue or not('y'/'n')");
      scanf("%c",&ch);
    }
  while(ch=='Y'||ch=='y');
  return 1;
}
