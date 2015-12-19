//program to find the length,no of words etc with using string function

#include<stdio.h>


int main()
{
  char str[50];
  int i,l,count=1;

  printf("Enter the string \n");
  gets(str);
  for(i=0;str[i]!='\0';i++)
    {
      l=i;
      if(str[i]==' ')
        count++;
    }
  printf("\nLength of the string is %d \n",l+1);
  printf("Number of words %d ",count);
  printf("\nNumber of non-blank characters %d",l+2-count);

  return 1;
}


