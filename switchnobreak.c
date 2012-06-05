/* switch.c */
#include <stdio.h>
#define MISSILE 1
#define ROCKET 3
#define LASER 2
void fire( int weapon );
void main()
{
  fire( ROCKET );
}
void fire( int weapon )
{
  switch( weapon )
  {
    case MISSILE:
    case ROCKET:
      printf( "Fired missile!\n" );
      printf( "Fired rocket!\n" );
      break;
    case LASER:
      printf( "Fired laser!\n" );
      break;
    default:
      printf( "Unknown weapon!\n");
      break;
  }
}

