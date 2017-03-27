///*Program      : Biggest of a Series
//  Programmer   : Lal Thomas
//  Email        : lal.thomas.mail@gmail.com
//  Web          : http://lalamboori.blogspot.com/
//  Compiled on  : MigW
//  Tested  on   : Windows XP */

#include<stdio.h>
#include<stdlib.h>

int main()
{
  int Pause;
  int a[70],n,i,max;
  printf("\n--------- Biggest Of A Series Of Numbers --------");
  printf("\n\n No of Numbers :");
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      printf("Enter %d th  number ",i+1);
      scanf("%d",&a[i]);
    }
  max=a[0];
  for(i=0;i<n;i++)
    {
      if(max<a[i])
        {
          max=a[i];
        }
    }
  printf("\n\nInput List\n\n");
  for(i=0;i<n;i++)
    {
      printf("%d\t",a[i]);
    }
  printf("\n\nBigest : %d",max);

  //
  // Prepares Program to wait
  // accepting a keystroke
  //
  printf("\nPress any key to continue");
  fflush(stdin);
  Pause=getchar();
  return 0;
}
