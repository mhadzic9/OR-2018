#include <stdio.h>
#include <math.h>
int main() {
    float a,b,c,k,n;
    printf ("Unesite koeficijente a, b i c: ");
    scanf ("%f %f %f" , &a, &b, &c);
    n= (b*b) - (4*a*c);
    k=sqrt(n);
    if (n<0) {
    	printf ("Korijen negativnog broja nema realnih rjesenja!");
    } else {
    	printf ("Iznos za koeficijente %g, %g i %g je: %g" ,a, b, c, k);
    }
	return 0;
}
