/* pmmatch.c */
#include <stdio.c>
void showme( int a, int b);
int main(int argc, char const *argv[])
{
	int x = 1, int y = 100;
	showme( x, y);
	return 0;
}

void showme( int a, int b )
{
	printf( "a=%d b=%d\n", a, b );
}
