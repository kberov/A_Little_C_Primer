/* fnarray.c 
Arrays can be sent to functions as if they were any other type of variable: */
#include <stdio.h>
#define SIZE 10
void testfunc( int a[] );
int main(int argc, char const *argv[])
{
	int ctr, a[SIZE];
	for (ctr = 0; ctr < SIZE; ++ctr)
	{
		a[ctr] = ctr * ctr;
	}
	testfunc( a );
	return 0;
}

void testfunc( int a[])
{
	int n;
	for (int n = 0; n < SIZE; ++n)
	{
		printf("a[%d]\t=>\t%d\n", n, a[n]);
	}
}
