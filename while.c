/* while.c */
#include <stdio.h>
int main()
{
  int test = 10;
  while(test > 0)
  {
  	printf("test = %d\n", test);
  	test = test - 2;
  }
  return 0;
}
