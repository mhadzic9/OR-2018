#include <stdio.h>
#include <math.h>
void zaokruzi (double *niz,int vel)
{
	double* p=niz;
	while (p<niz+vel) {
		*p=round(*p*10)/10;
		p++;
	}
}
int main()
{
	double niz[1000];
	int i,vel;
	printf ("Broj realnih brojeva koji ce se unositi: ");
	do {
		scanf ("%d", &vel);
	} while (vel<0);
	printf ("Clanovi niza: ");
	for (i=0; i<vel; i++) {
		scanf ("%lf", &niz[i]);
	}
	zaokruzi(niz,vel);
	printf ("Nakon zaokruzivanja: ");
	for (i=0; i<vel; i++) {
		printf ("%g", niz[i]);
	}
	return 0;
}
