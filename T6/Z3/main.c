#include <stdio.h>
#define BROJ_EL 10

int main()
{
	int nizA[BROJ_EL],nizB[BROJ_EL],nizC[2*BROJ_EL],i,brojacA=0,broj1,brojacB=0,broj;
	printf ("Unesite elemente niza A: ");
	for (i=0; i<BROJ_EL; ++i) {
		scanf ("%d", &broj);
		if (broj==-1)
			break;
		nizA[i]=broj;
		brojacA++;
	}
	printf ("Unesite elemente niza B: ");
	for (i=0; i<BROJ_EL; ++i) {
		scanf ("%d", &broj1);
		if (broj1==-1)
			break;
		nizB[i]=broj1;
		brojacB++;
	}
	for (i=0; i<brojacA+brojacB; i++) {
		if (i<brojacA)
			nizC[i]=nizA[i];
		else nizC[i]=nizB[i-brojacA];
	}
	printf ("Niz C glasi: ");
	for (i=0; i<brojacA+brojacB; i++) {
		printf ("%d", nizC[i]);
		if (i!=brojacA+brojacB-1)
			printf (",");
	}

	return 0;
}
