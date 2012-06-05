/* if.c */
#include <stdio.h>
#define MISSILE 1
void fire( int weapon );
void main()
{
  fire( MISSILE );
}

void fire( int weapon )
{
  if(weapon == MISSILE)
  {
    printf( "Fired missile!\n" );
  }
  if(weapon != MISSILE)
  {
    printf("Unknown weapon: %d", weapon);
  }
}
