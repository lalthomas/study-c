/*Program on C++
  Programmer : Lal Thomas
  Compiled on Turbo C++
  Tested on Windows*/

#include<stdio.h>

int main()
{
  int i,j,n;
  char a[20][20];

  printf("Enter the limit\n");
  scanf("%d",&n);
  printf("Enter the string\n");
  for(i=0;i<n;i++)
    {
      scanf("%s",a[i]);
    }
  printf("\nString\n");
  for(i=0;i<n;i++)
    printf("%s\n",a[i]);

  return 1;
}
