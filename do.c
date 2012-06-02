/* do.c */
#include "stdio.h"
int main(int argc, char const *argv[])
{
	int test = 10;
	do
	{
		printf("test = %d\n", test);
		test = test - 2;
	} while ( test > 10 );
	return 0;
}