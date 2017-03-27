///*Program      :
//  Programmer   : Lal Thomas
//  Email        : lal.thomas.mail@gmail.com
//  Web          : http://lalamboori.blogspot.com/
//  Compiled on  : MigW
//  Tested  on   : Windows XP */
#include<stdio.h>
int  main()
{
  int num,tem,image=0;
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
    printf(" %d is not a palindrome number",num);
  return 1;
}
