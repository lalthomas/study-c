/*
	Program on C++
	Programmer : Lal Thomas
	Compiled on Turbo C++
	Tested on Windows
*/

#include<stdio.h>
int main()
{
  int a[10],n,i,j;
  printf("Enter no of elements : ");
  scanf("%d",&n);
  printf("Enter the elements of the array : ");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf("Array elements in the  reverse order:");
  for(i=n-1;i>=0;i--)
    printf("%d\t",a[i]);
  return 1;
}
