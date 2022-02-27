#include <stdio.h>

int main()
{
	int i;
	double A[100],B[100],C[100];
	printf ("Unesite clanove niza A: ");
	for (i=0; i<5; i++) {
		scanf ("%lf", &A[i]);
	}
	printf ("Unesite clanove niza B: ");
	for (i=0; i<5; i++) {
		scanf ("%lf", &B[i]);
	}
	for (i=0; i<5; i++) {
		C[i]=A[i]*2+B[i];
	}
	printf ("Niz A glasi: ");
	for (i=0; i<5; i++) {
		if(i!=4)
			printf ("%.2f, ", A[i]);
		else {
			printf ("%.2f", A[i]);
			printf ("\n");
		}
	}
	printf ("Niz B glasi: ");
	for (i=0; i<5; i++) {
		if (i!=4)
			printf ("%.2f, ", B[i]);
		else {
			printf ("%.2f", B[i]);
			printf ("\n");
		}
	}
	printf ("Niz C glasi: ");
	for (i=0; i<5; i++) {
		if (i!=4)
			printf ("%.2f, ", C[i]);
		else {
			printf ("%.2f", C[i]);
			printf ("\n");
		}
	}
	return 0;
}
