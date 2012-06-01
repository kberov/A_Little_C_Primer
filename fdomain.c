/* fdomain.c */
#include <stdio.h>
void func1( void );
void func2( void );

int main()
{
	puts( "MAIN" );
	func1();
	func2();
	return 0;
}

void func1( void)
{
	puts("FUNC1");
	func2();
}

void func2( void )
{
	puts("FUNC2");
	func1();
}

