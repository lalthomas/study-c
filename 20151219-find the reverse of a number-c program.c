// Program		 : find the reverse of a number
//  Programmer   : Lal Thomas
//  Email        : lal.thomas.mail@gmail.com
//  Web          : http://lalamboori.blogspot.com/
//  Compiled on  : MigW
//  Tested  on   : Windows XP

#include<stdio.h>

int  main()
{
  int num,rev=0,mem;
  printf("Enter a positive  number : ");
  scanf("%d",&num);
  while(num>0)
    {
      mem=num%10;
      rev=(rev*10)+mem;
      num/=10;
    }
  printf("Reverse is " );
  printf("%d",rev);
  return 1;
}
