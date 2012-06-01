/* sphere.c */
#include <stdio.h> /* Include header file for printf */
#define PI 3.141592654f /* Define a constant. */
static float sphere(float); /* Function prototype. sphere is given internal linkage 
								with the keyword 'static' since it is not used outside
								this translation unit. */

int main(void) /* Main function */ 
{
	float volume; /* Define a float variable. */
	float radius = 3; /* Define and initialize a variable. */
	volume = sphere(radius); /* Call sphere() and copy the return value into 'volume'. */
	printf("Volume: %f\n", volume);/* print the result */
	return 0;
}

float sphere(float rad) /* Definition of a volume calculating function. */
{
	float result; /* Define a result variable with an automatic storage duration and skope. */
	result = rad * rad * rad;
	result = 4 * PI * result / 3; 
	return result; /* returned to the caller of sphere() */

}