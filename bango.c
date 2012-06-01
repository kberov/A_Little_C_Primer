/* bango.c */
#include <stdio.h>
void fire( void );
int main(int argc, char const *argv[])
{
	printf("Firing!\n");
	fire();
	printf("Fired!\n");
	return 0;
}

void fire()
{
	printf("BANG!\n");
}