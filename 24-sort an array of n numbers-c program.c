/*
	Program on C++
	Programmer : Lal Thomas
	Compiled on Turbo C++
	Tested on Windows
*/
 

//program by lal thomas

#include<stdio.h>

int main()
{
  int a[50],i,j,t,size;
  printf("Enter the size of the array : ");
  scanf("%d",&size);
  printf("Enter %d elements of array :",size);
  for(i=0;i<size;i++)
    scanf("%d",&a[i]);
  for(i=0;i<size;i++)
    {
      for(j=i+1;j<size;j++)
        {
          if(a[i]>a[j])
            {
              t=a[j];
              a[j]=a[i];
              a[i]=t;
            }
        }
    }  
  printf(" Sorted array ");
  printf("\n");
  for(i=0;i<size;i++)
    printf("%d\t",a[i]);

  return 1;
}
