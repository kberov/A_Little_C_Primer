/* ifelse.c */
#include <stdio.h>
#define MISSILE 1
#define ROCKET 2
void fire( int weapon );
void fire_no_braces(int weapon);
void main()
{
  fire( ROCKET );
  fire_no_braces( MISSILE );
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

/*
 * Since there is only one statement in each clause the curly brackets aren't really necessary. This example would work just as well:
 */
 
void fire_no_braces(int weapon)
{
  if( weapon == MISSILE)
    printf("Fired missile\n");
  else 
    printf("Unknown weapon\n");
}
