/* nestif.c */
#include <stdio.h>
#define MISSILE 1
#define LASER 2
void fire( int weapon );
void main()
{
  fire( LASER );
}
void fire( int weapon )
{
  if( weapon == MISSILE )
  {
    printf( "Fired missile!\n" );
  }
  else 
  {
    if( weapon == LASER )
    {
      printf( "Fired laser!\n" );
    }
    else
    {
    printf( "Unknown weapon!\n");
    }

  }
}

