/// Program      : Matrix Addition
//  Programmer   : Lal Thomas
//  Email        : lal.thomas.mail@gmail.com
//  Web          : http://lalamboori.blogspot.com/
//  Compiled on  : MigW
//  Tested  on   : Windows XP

#include<stdio.h>


void main()
{

  int a[20][20],b[20][20],c[20][20],r1,r2,c1,c2,i,j;
  printf(" Enter the number of rows and colunmns of first matrix :\n");
  scanf("%d%d",&r1,&c1);
  printf("Enter the number of rows and columns of second matrix : \n");
  scanf("%d%d",&r2,&c2);
  if((r1==r2)&&(c1==c2))
    {
      printf(" Enter the elements of first matrix \n"   );
      for(i=0;i<r1;i++)
        {
          for(j=0;j<c1;j++)
            {
              scanf("%d",&a[i][j]);
            }
        }
      printf("Enter the elements of the second matrix\n " );
      for(i=0;i<r2;i++)
        {
          for(j=0;j<c2;j++)
            {
              scanf("%d",&b[i][j]);
            }
        }
      printf(" Sum of the matrix is \n\n ");
      for(i=0;i<r1;i++)
        {
          for(j=0;j<c1;j++)
            {
              c[i][j]=a[i][j]+b[i][j];
            }
        }
      for(i=0;i<r1;i++)
        {
          for(j=0;j<c1;j++)
            {
              printf("\t%d",c[i][j]);
            }
          printf("\n");
        }

    }
  else
    {
      printf(" Not conformable for addition ");
    }
}
