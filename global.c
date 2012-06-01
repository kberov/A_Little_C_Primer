/* global.c */
#include <stdio.h>

void somefunc( void );
int globalvar;

int main()
{
	extern int globalvar;
	globalvar = 42;
	somefunc();
	printf( "%d\n", globalvar );	
	return 0;
}

void somefunc( void ) 
{
	extern int globalvar;
	printf("%d\n", globalvar );
	globalvar = 13;
}
