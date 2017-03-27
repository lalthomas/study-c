//	Program      : find whether a character is present in a string or not
//  Programmer   : Lal Thomas
//  Email        : lal.thomas.mail@gmail.com
//  Web          : http://lalamboori.blogspot.com/
//  Compiled on  : Turbo C++, MigW
//  Tested  on   : Windows XP

#include<stdio.h>
#include<stdlib.h>
int main()
{
  char Pause;
  char a[100],check;
  int i,flagcount=0;
  printf("Enter the string :");
  scanf("%s",a);
  fflush(stdin);
  printf("Enter the character to be searched : ");
  scanf("%c",&check);
  for(i=0;a[i]!='\0';i++)
    {
      if(a[i]==check)
        {
          flagcount++;
          if(flagcount==1)
            printf("Character found at ");
          printf("%d,",i+1);

        }
    }
  if(flagcount>=1)
    printf("\b position");
  if(flagcount==0)
    printf("Character is not present in the string\n");

  /*
  /* Prepares Program to wait
  /* accepting a keystroke
  */
  fflush(stdin);
  Pause=getchar();
  return 0;
}
