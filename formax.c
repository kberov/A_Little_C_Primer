/* formax.c */
#include <stdio.h>
void main()
{
  int a, b;
  for ( a = 256, b = 1; b < 512 ; a = a / 2, b = b * 2 )
  {
    printf( "a = %d b = %d\n", a, b );
  }
}
