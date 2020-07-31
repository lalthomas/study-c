/*Program on C++
  Programmer : Lal Thomas
  Compiled on Turbo C++
  Tested on Windows*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
  char Pause;
  char c;
  int i,j;
  c='A';
  for(i=1;i<=5;i++)
    {
      for(j=1;j<=i;j++)
        putchar(c);
      c++;
      putchar('\n');
      fflush(stdout);

    }

  /*
  /* Prepares Program to wait
  /* accepting a keystroke
  */
  fflush(stdin);
  Pause=getchar();
  return 0;
}
