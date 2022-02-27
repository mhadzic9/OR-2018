#include <stdio.h>

int main() {
	int b,cifra,r=0,nb=0,broj=0,R;
	do {
	printf ("Unesite broj: ");
	scanf ("%d" , &b);
	} while (b<0);
	do {
		printf ("Unesite cifru: ");
		scanf ("%d" , &cifra);
	} while (cifra<0);
	do {
		(r=b%10);
		b=b/10;
		if (r!=cifra) {
			nb=nb*10+r;
		}
	} while (b>0);
	do {
		r=nb%10;
		nb=nb/10;
		broj=broj*10+r;
	} while (nb>0);
	printf ("Nakon izbacivanja broj glasi %d.\n" , broj);
	R=broj*2;
	printf ("Broj pomnozen sa dva glasi %d." , R);
	return 0;
}
