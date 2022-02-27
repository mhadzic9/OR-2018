#include <stdio.h>
#include <math.h>
int main() {
	float a,b,c,k;
	printf ("Unesite koeficijente a, b i c: ");
	scanf ("%f %f %f" , &a , &b, &c);
	k= sqrt((b*b) - (4*a*c));
	printf ("Iznos za koeficijente %g, %g i %g je: %g" , a, b, c, k);
	
	return 0;
}
