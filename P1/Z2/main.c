#include <stdio.h>

int main() {
	float a,b,c,d,e,z,p;
	printf ("\nUnesite 5. ocjena: ");
	scanf ("%f %f %f %f %f" , &a, &b, &c, &d, &e);
	z=a+b+c+d+e;
	p=(a+b+c+d+e)/5;
	printf ("Zbir unesenih ocjena je %g, a prosjek je: %.2f", z, p);
	
	
	return 0;
}
