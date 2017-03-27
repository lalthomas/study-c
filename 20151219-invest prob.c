
/*Program on C
  Programmer :Lal Thomas
  Compiled on Turbo C
  Tested on Windows */
/*--------------------------Investment  Problem--------------------------*/
#define PERIOD 10
#define PRINCIPAL 5000.0
/*--------------------------Main Program Begins--------------------------*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
  char Pause;
  int year;
  float amount,value,inrate;
  /*-------------------------Assignment Statements------------------------*/
  amount=PRINCIPAL;
  inrate=0.11;
  year=0;
  /*-------------------------Computation Statements----------------------*/
  /*-------------------------Computation Using While Loop----------------*/
  while(year<=PERIOD)
    {
      printf("%2d\t%8.2f\n",year,amount);
      value=amount+inrate*amount;
      year=year+1;
      amount=value;
    }
  /*-------------------------while loop ends----------------------------*/

  /*
  /* Prepares Program to wait
  /* accepting a keystroke
  */
  fflush(stdin);
  Pause=getchar();
  return 0;
}
/*-------------------------Program Ends ------------------------------*/



