///*Program      :
//  Programmer   : Lal Thomas
//  Email        : lal.thomas.mail@gmail.com
//  Web          : http://lalamboori.blogspot.com/
//  Compiled on  : MigW
//  Tested  on   : Windows XP */
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i,count=0,num,n;
  printf("This program is for checking whether a number is prime or not");
  printf("\n\npress any key");
  printf("Enter a no ");
  scanf("%d",&n );
  for(i=1;i<=n;i++)
    {
      if(n%i==0)
        {
          count++;
        }
    }
  if(count==2)
    printf("%d is a prime number",n);
  else
    printf("%d is not a prime number",n);

  return 1;
}