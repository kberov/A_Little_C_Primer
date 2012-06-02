/* noside.c */
#include <stdio.h>

void showmore( int a, int b);

int main(int argc, char const *argv[])
{
	int x,y = ( 1, 100 );
	
	showmore( x, y);
	
	printf("x=%d y=%d\n", x, y );

	return 0;
}

void showmore(int a, int b) 
{
	printf("a=%d b=%d\n", a, b );
	a = 42;
	b = 666;
	printf("a=%d b=%d\n", a, b );
}