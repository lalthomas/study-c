/*
	Program on C++
	Programmer : Lal Thomas
	Compiled on Turbo C++
	Tested on Windows
*/

  #include<stdio.h>
#include<ctype.h>
#include<string.h>

void main()
{
  int i,len;
  char ch[20];

  printf("************************************************************************\n");
  printf("\tThis program is for changing the case of letters\n\n");
  printf("Enter your name:\t");
  scanf("%s",ch);
  len=strlen(ch);
  for(i=0;i<=len;i++)
    {
      ch[i]=toupper(ch[i]);
    }
  printf("%s",ch);
  printf("\n");
  for(i=0;i<=len;i++)
    {
      ch[i]=tolower(ch[i]);
    }
  printf("%s",ch);

}
