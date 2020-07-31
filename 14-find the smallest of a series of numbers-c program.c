//	Program      : find the smallest of a series of numbers
//  Programmer   : Lal Thomas
//  Email        : lal.thomas.mail@gmail.com
//  Web          : http://lalamboori.blogspot.com/
//  Compiled on  : MigW
//  Tested  on   : Windows XP */

#include<stdio.h>

int main()
{
  int a[100],min,n,i;
  printf("\tThis program is for finding smallest of a series of numbers");
  printf("How many numbers do you want to check\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      printf("Enter %dth  number ",i+1);
      scanf("%d",&a[i]);
    }
  min=a[0];
  for(i=0;i<n;i++)
    {
      if(min>a[i])
        min=a[i];
    }
  printf("Numbers in Array\n");
  for(i=0;i<n;i++)
    printf("%d\n",a[i]);
  printf("\nSmallest number in the array is %d ",min);
  return 0;
}
