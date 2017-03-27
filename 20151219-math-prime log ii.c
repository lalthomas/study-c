
/*Program on C
Programmer :Lal Thomas
Compiled on Turbo C
Tested on Windows */


#include<stdio.h>

int  main()
{
  int n,i,y=0;
  printf("Enter no");
  scanf("%d",&n);
  for (i=1;i<=n;i++)
    if(n%i==0)
      ;
  y++;
  if(y==2)
    printf("%d is Prime",n);
  else
    printf("%d isn't Prime",n);

  return 1;

}
