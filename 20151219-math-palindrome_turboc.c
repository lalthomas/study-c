///*Program      :
//  Programmer   : Lal Thomas
//  Email        : lal.thomas.mail@gmail.com
//  Web          : http://lalamboori.blogspot.com/
//  Compiled on  : MigW
//  Tested  on   : Windows XP */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void head();
int  main()
{
  int no,s=0,temp,a;
  printf("Enter a number :");
  printf("\n");
  scanf("%d",&no);
  temp=no;

  while(no!=0)
    {
      s*=10;
      a=no%10;
      s+=a;
      no/=10;
    }
  printf("\n%d <----> %d\n",temp,s);
  if(s==temp)
    {
      printf("%d is palindrome",temp);
    }
  else
    {
      printf("%d is not palindrome",temp);
    }

  return 1;
}
