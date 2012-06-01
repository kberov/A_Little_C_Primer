/* oldsphere.c - Pre-ANSI C */
#include <stdio.h>
#define PI 3.141592654
float sphere() /* Parameters not defined in prototype */

main ()
{
	float volume;
	int radius = 3;
	volume = sphere( radius );
	printf("Volume: %f\n", volume );
}

float sphere( rad )
int rad; /* Parameter types not specified in function header */
{
	float result;

	result = rad * rad * rad;
	result = 4 * PI * result / 3;
	return result;
}