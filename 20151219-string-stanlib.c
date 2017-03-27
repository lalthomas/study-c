
/*Program on C++
  Programmer : Lal Thomas
  Compiled on Turbo C++
  Tested on Windows*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
  char Pause;
  int ch;
  char ch1,ch2;
  printf("Enter a character \t");
  ch=getchar();

  if (isalnum(ch))
    printf("1. The character is alphanumeric\n");
  else
    printf("1. The character is not alphanumeric\n ");


  if(isdigit(ch))
    printf("2. The character is a digit\n");
  else
    printf("2. The character is not  a digit\n");


  if(isalpha(ch))
    printf("3. The character is an alphabet\n");
  else
    printf("3. The character is not an alphabet\n");


  printf("\n\n\n");

  if(islower(ch))
    {
      ch1=ch;
      ch2=toupper(ch);
      printf("\n The upper case equivalent of %c is %c",ch1,ch2);
    }


  if(isupper(ch))
    {
      ch1=ch;
      ch2=tolower(ch);
      printf("/n The lower case equivalent of %c is %c",ch1,ch2);
    }

  /*
  /* Prepares Program to wait
  /* accepting a keystroke
  */
  fflush(stdin);
  Pause=getchar();
  return 0;
}

