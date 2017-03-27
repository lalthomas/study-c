/*Program on C
  Programmer : Lal Thomas
  Compiled on Turbo C++
  Tested on Windows*/
#include<stdio.h>

int  main()
{

  char ch,str[50];
  int i,temp,count=0,f=0;
  printf("Enter the string \n");
  scanf("%s",str);
  for(i=0;str[i]!='\0';i++)
    count++;
  temp=count;
  for(i=0;i<count/2;i++)
    {
      if(str[i]!=str[temp-1])
        {
          f=1;
          break;
        }
      temp--;
    }
  if(f==0)
    printf("The string is palindrome");
  else
    printf("The string is not palindrome");

  return 1;
}
