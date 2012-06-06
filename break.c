/* break.c */
#include <stdio.h>
int main()
{
	int n;
	for (n = 0; n < 10; n = n + 1)
	{
		if ( n == 5)
		{
			break; /* Punch out of loop at value 5. */
		}
		else
		{
			printf("%d\n", n );
		}
	}
	return 0;
}
