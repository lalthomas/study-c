//	Program      : find whether a number is prime or not
//  Programmer   : Lal Thomas
//  Email        : lal.thomas.mail@gmail.com
//  Web          : http://lalamboori.blogspot.com/
//  Compiled on  : Turbo C++, MigW
//  Tested  on   : Windows XP

#include<stdio.h>

int  main()
{
  int n,flag=0,i;
  //
  printf("Enter a number: ");
  scanf("%d",&n);
  for(i=2;i<=n/2;i++)
    {
      if(n%i==0)
        flag=1;
    }
  if(flag==1)
    {
      printf("%d is not a prime number",n);
    }
  else
    {
      printf("%d is a prime number",n);
    }

  return 1;
}

