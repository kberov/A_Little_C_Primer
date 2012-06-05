/* switch.c */
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
  switch( weapon )
  {
    case MISSILE:
      printf( "Fired missile!\n" );
      break;
    case LASER:
      printf( "Fired laser!\n" );
      break;
    default:
      printf( "Unknown weapon!\n");
      break;
  }
}
