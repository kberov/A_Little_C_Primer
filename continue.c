/* continue.c */
/*
 * There is also a "continue" statement that skips to the end of the loop body 
 * and continues with the next iteration of the loop. 
 * For example:
 */
#include <stdio.h>

int main()
{
  /* note: use option -std=c99 or -std=gnu99 to compile your code */
  for(int n = 0; n <10; n = n +1)
  {
    int b = 0;
    /* there is also a special "conditional operator" that performs a
     * simple conditional assignment of the form:
     */
    b = ( n == 3 ) ? 10 : 255 ;
    if (n == 5)
      continue;
    else
      printf("%3d\t%d\n", b, n);
    
    /* Finally, there is a "goto" statement: */
    if(n==8) 
      goto punchout;
  }
    punchout: puts(
      "I am out before the end of the loop.\nBut you don't do it!"
    );
  return 0;
}
