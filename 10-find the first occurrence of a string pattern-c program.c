//	Program      : find the first occurrence of a string pattern
//  Programmer   : Lal Thomas
//  Email        : lal.thomas.mail@gmail.com
//  Web          : http://lalamboori.blogspot.com/
//  Compiled on  : Turbo C++, MigW
//  Tested  on   : Windows XP


#include <stdio.h>
#include <stddef.h>

char *mystrstr(char input[], char pat[])
{
  char *start, *p1, *p2;
  
  // printf("%p\n", (void *)&input[0]);
  // fflush(stdout);
  
  for(start = &input[0]; *start != '\0'; start++)
    { 
	  /* for each position in input string... */
      p1 = pat; 
	  /* prepare to check for pattern string there */
      p2 = start;
      while(*p1 != '\0')
        {
          if(*p1 != *p2) /* characters differ */
            break;
          p1++;
          p2++;
        }
      if(*p1 == '\0')  /* found match */
        return start;
    }

  return NULL;
}

void main(){
		
	printf("%s\n",mystrstr("indian","india"));
	printf("%s\n",mystrstr("america","indian"));
	
}