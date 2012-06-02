/* fire.c */
#include <stdio.h>
void fire( int n );
int main(int argc, char const *argv[])
{
	printf( "Firing!\n" );
	fire( 5 );
	printf( "Fired!\n" );
	return 0;
}

void fire( int n)
{
	int i;
	for (int i = 0; i <= n; ++i)
	{
		printf("BANG!\n");
	}
}