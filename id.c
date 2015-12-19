/*Program on C
  Programmer : Lal Thomas
  Compiled on Turbo C++
  Tested on Windows*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
  char Pause;
  char ch;
  printf("enter a key from the key board  ");
  scanf("%c",&ch);
  if(ch>='A'&&ch<='Z')
    printf("UPPER CASE LETTER");
  else if(ch>='a'&&ch<='z')
    printf("lower case letter");
  else if (ch>=0&&ch<=9)
    printf("It is a digit");
  else
    printf("It is a special charater");
  /*
  /* Prepares Program to wait
  /* accepting a keystroke
  */
  fflush(stdin);
  Pause=getchar();
  return 0;
}
