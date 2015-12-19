///*Program      :
//  Programmer   : Lal Thomas
//  Email        : lal.thomas.mail@gmail.com
//  Web          : http://lalamboori.blogspot.com/
//  Compiled on  : MigW
//  Tested  on   : Windows XP */
#include<stdio.h>

int  main()
{
  int sumeven=0,sumodd=0,i=1,j=2;

  for(i=1,j=2;i<100;i+=2,j+=2)
    {
      sumeven+=j;
      sumodd+=i;
    }
  printf("sum of odd numbers less than 100 is %d",sumodd);
  printf("\nsum of even numbers less than 100 is %d",sumeven);

  return 0;
}



