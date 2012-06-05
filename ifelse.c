/* ifelse.c */
#include <stdio.h>
#define MISSILE 1
#define ROCKET 2
void fire( int weapon );
void main()
{
  fire( ROCKET );
}

void fire( int weapon )
{
  if( weapon == MISSILE )
  {
    printf( "Fired missile!\n" );
  }
  else {
    printf("Unknown weapon\n");
  }
}
